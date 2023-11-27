#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024


/**
 * handle_error - Check for errors and exit if an error occures
 *
 * @result: The result or file descriptor to check
 *
 * @buffer: The buffer to free in a case where there is an error
 *
 * @filename: The name of the file we are processing
 *
 * @exit_code: The exit code to use when there is a need to exit the program
 *
 * Return: void
 */
void handle_error(int result, char *buffer, char *filename, int exit_code)
{
	if (result < 0)
	{
		if (exit_code == 98)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		}
		else if (exit_code == 99)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		}
		else if (exit_code == 100)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", result);
		}
		else
		{
			dprintf(STDERR_FILENO, "Error: Unknown error\n");
		}

		free(buffer);
		exit(exit_code);
	}
}

/**
 * close_file - Close a file descriptor and handle errors accordingly
 *
 * @fd: The file descriptor to close
 *
 * @buffer: The buffer to freee in case there is an error
 *
 * Return: void
 */
void close_file(int fd, char *buffer)
{
	int close_result = close(fd);

	handle_error(close_result, buffer, "", 100);
}

/**
 * main - The main function for copying file one to another
 *
 * @argc: Argument count
 *
 * @argv: Argument vector
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int source_fd, dest_fd, read_bytes, write_bytes;
	char *buffer;

	/* Check if the correct number of argument is provided */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n", argv[0]);
		exit(97);
	}
	/* On success, allocate memory for the buffer */
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (!buffer)
	{
		exit(1);
	}
	/* Open the source file for reading */
	source_fd = open(argv[1], O_RDONLY);
	handle_error(source_fd, buffer, argv[1], 98);
	/* Open or create if not exist for writing, truncate if exists */
	dest_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	handle_error(dest_fd, buffer, argv[2], 99);

	/* Copy data from source to destination until EOF */
	do {
		read_bytes = read(source_fd, buffer, BUFFER_SIZE);
		handle_error(read_bytes, buffer, argv[1], 98);

		write_bytes = write(dest_fd, buffer, read_bytes);
		handle_error(write_bytes, buffer, argv[2], 99);
	} while (write_bytes >= BUFFER_SIZE);
	/* Close file descriptors */
	close_file(source_fd, buffer);
	close_file(dest_fd, buffer);

	/* Free allocated memory */
	free(buffer);
	return (0);
}
