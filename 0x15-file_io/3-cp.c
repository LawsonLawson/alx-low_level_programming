#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * close_file_descriptor - Closes a file descriptor and handles errors
 *
 * @fd: The file descriptor to be closed
 *
 * Return: void
 */
void close_file_descriptor(int fd)
{
	int status = close(fd);

	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file
 *
 * @argc: The number of arguments supplied the program
 *
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int source_file_descriptor, destination_file_descriptor, bytes_read,
	    bytes_written;
	char buffer[1024];

	/* Check for the correct number of arguments */
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	/* Open source file for reading */
	source_file_descriptor = open(argv[1], O_RDONLY);
	if (source_file_descriptor == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	/* Open or create destination file for writting */
	destination_file_descriptor = open(argv[2], O_CREAT | O_WRONLY |
			O_TRUNC, 0664);
	if (destination_file_descriptor == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close_file_descriptor(source_file_descriptor);
	exit(99);
	/* Copy data from source to destination */
	do {
		bytes_read = read(source_file_descriptor, buffer, 1024);
		if (bytes_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from the file %s\n", argv[1]);
		close_file_descriptor(source_file_descriptor);
		close_file_descriptor(destination_file_descriptor);
		exit(98);
		bytes_written = write(destination_file_descriptor, buffer,
				bytes_read);
		if (bytes_written == -1)
			dprintf(STDERR_FILENO, "Error: Can't write %s\n", argv[2]);
		close_file_descriptor(source_file_descriptor);
		close_file_descriptor(destination_file_descriptor);
		exit(99);
	} while (bytes_read > 0);
	close_file_descriptor(source_file_descriptor);
	close_file_descriptor(destination_file_descriptor);
	return (0);
}

