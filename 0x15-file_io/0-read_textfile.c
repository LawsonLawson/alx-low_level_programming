#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it ot the stdout
 *
 * @filename: A pointer to the name of the file
 *
 * @letters: The number of letters the function reads and prints
 *
 * Return: 0 if failure, otherwise the number of bytes function can read
 * and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* File descriptores for file operations and buffer to store content */
	int file_descriptor, read_result, write_result;
	char *content_buffer;

	/* Check if the filename is NULL */
	if (filename == NULL)
		return (0);
	/* On success , allocate memory for the content buffer */
	content_buffer = malloc(sizeof(char) * letters);
	if (content_buffer == NULL)
		return (0);
	/* On success, open the file in read-only mode */
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(content_buffer);
		return (0);
	}
	/* Read the content from the file into the buffer */
	read_result = read(file_descriptor, content_buffer, letters);
	if (read_result == -1)
	{
		/* If also reading fails, free the buffer and close the file */
		free(content_buffer);
		close(file_descriptor);
		return (0);
	}
	write_result = write(STDOUT_FILENO, content_buffer, read_result);
	/* Check for errors during the writing process */
	if (write_result == -1 || write_result != read_result)
	{
		free(content_buffer);
		close(file_descriptor);
		return (0);
	}
	/* Free the allocated buffer and close the file */
	free(content_buffer);
	close(file_descriptor);
	/* Return the number of bytes read and printed */
	return (write_result);
}
