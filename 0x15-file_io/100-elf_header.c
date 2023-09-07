#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elfs(unsigned char *e_ident);
void print_magics(unsigned char *e_ident);
void print_classes(unsigned char *e_ident);
void print_datas(unsigned char *e_ident);
void print_versions(unsigned char *e_ident);
void print_abis(unsigned char *e_ident);
void print_osabis(unsigned char *e_ident);
void print_types(unsigned int e_type, unsigned char *e_ident);
void print_entrys(unsigned long int e_entry, unsigned char *e_ident);
void close_elfs(int elf);
/**
 * check_elfs - This function Checks if a file is an ELF file.
 * @e_ident: The pointer to an array containing the ELF magic numbers.
 * Written by daniekl oluwanimotele
 * Description: exit code 98 if the file is not an elf file.
 */
void check_elfs(unsigned char *e_ident)
{
	int indexs;

	for (indexs = 0; indexs < 4; indexs++)
	{
		if (e_ident[indexs] != 127 &&
		    e_ident[indexs] != 'E' &&
		    e_ident[indexs] != 'L' &&
		    e_ident[indexs] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magics - This function Prints the magic numbers of an ELF header.
 * @e_ident: The pointer to an array containing the ELF magic numbers.
 * Daniel oluwanimotele
 * Description: The Magic numbers are separated by spaces and me.
 */
void print_magics(unsigned char *e_ident)
{
	int indexs;

	printf(" Magic: ");

	for (indexs = 0; indexs < EI_NIDENT; indexs++)
	{
		printf("%02x", e_ident[indexs]);

		if (indexs == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_classes - This function Prints the class of an ELF header.
 * @e_ident: The pointer to a array containing the ELF class used.
 */
void print_classes(unsigned char *e_ident)
{
	printf(" Class: ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_datas - Theis function Prints the data of an ELF header.
 * @e_ident: The pointer to an array containing the ELF class nused.
 */
void print_datas(unsigned char *e_ident)
{
	printf(" Data: ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_versions - This functoombn Prints the version of an ELF header.
 * @e_ident: The pointer to an array containing the ELF version used.
 */
void print_versions(unsigned char *e_ident)
{
	 printf(" Version: %d",
			  e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabis - This function Prints the OS/ABI of an ELF header.
 * @e_ident: the pointer to an array containing the ELF used version.
 */
void print_osabis(unsigned char *e_ident)
{
	printf(" OS/ABI: ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abis - This functiou Prints the ABI version of an ELF header.
 * @e_ident: The pointer to an array containing the correct ELF ABI version.
 */
void print_abis(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n",
		e_ident[EI_ABIVERSION]);
}

/**
 * print_types - This function Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @e_ident: A pointer to an array <> containing the ELF class.
 */
void print_types(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entrys - This function Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point used.
 * @e_ident: The pointer to an array <> containing the ELF class.
 */
void print_entrys(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elfs - This function Closes an ELF file.
 * @elf: The file descriptor <> of the ELF file.
 *
 * Description: exit code 98 if the file cannot be closed good.
 */
void close_elfs(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - This function Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number <> of arguments supplied to the program.
 * @argv: An array <> of pointers to the arguments.
 *
 * Return: 0 on success and -1 if fail.
 *
 * Description: The function call
 * exit code 98if the file is not an elf file or .
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int z, y;

	z = open(argv[1], O_RDONLY);
	if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elfs(z);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	y = read(z, header, sizeof(Elf64_Ehdr));
	if (y == -1)
	{
		free(header);
		close_elfs(z);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elfs(header->e_ident);
	printf("ELF Header:\n");
	print_magics(header->e_ident);
	print_classes(header->e_ident);
	print_datas(header->e_ident);
	print_versions(header->e_ident);
	print_osabis(header->e_ident);
	print_abis(header->e_ident);
	print_types(header->e_type, header->e_ident);
	print_entrys(header->e_entry, header->e_ident);

	free(header);
	close_elfs(z);
	return (0);
}
