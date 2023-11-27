#include "main.h"

/**
 * append_text_to_file - Appends text at the end of file
 *
 * @filename: A pointer to the anem of file
 *
 * @text_content: The string to add to the end of the file
 *
 * Return: -1 if failure , otherwise 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, text_length = 0;

	/* Check if the file name is NULL */
	if (filename == NULL)
	{
		return (-1);
	}

	/* On success, calculate the length of the text content */
	if (text_content != NULL)
	{
		for (text_length = 0; text_content[text_length];)
			text_length++;
	}
	/* Open the file in write-only and append mode */
	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	/* Check if file opening process was a success */
	if (file_descriptor == -1)
	{
		return (-1);
	}
	/* Write the text content to the file */
	write_result = write(file_descriptor, text_content, text_length);

	/* Check if the write operation was a not a success */
	if (write_result == -1)
	{
		/* Close the file descriptor before returning */
		close(file_descriptor);
		return (-1);
	}
	/* Close the file descriptor */
	close(file_descriptor);
	/* Return 1 to indicate success to OS */
	return (1);
}
