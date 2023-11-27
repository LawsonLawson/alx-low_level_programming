#include "main.h"

/**
 * create_file - Creates a file and writes content to the file
 *
 * @filename: Pointer to the name of the file to be created
 *
 * @text_content: Pointer to as string to write to the file
 *
 * Return: -1 if failure , otherwise 1
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, content_length = 0;

	/* Check if filename is NULL */
	if (filename == NULL)
	{
		return (-1);
	}

	/* Determine the length of the text_content if it isn't NULL */
	if (text_content != NULL)
	{
		for (content_length = 0; text_content[content_length];)
			content_length++;
	}
	/* Open , create, read, truncate and set permissions for for the file */
	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	/* Check if file opening was a success */
	if (file_descriptor == -1)
	{
		return (-1);
	}
	/* Write the content to the file */
	bytes_written = write(file_descriptor, text_content, content_length);

	/* Check if writing process was a success */
	if (bytes_written == -1)
	{
		close(file_descriptor);/* Close the file before returning */
		return (-1);
	}
	/* Close the file after writing */
	close(file_descriptor);
	return (1);
}
