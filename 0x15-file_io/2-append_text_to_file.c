#include "main.h"

/**
 * append_text_to_file - function appends text at end of the file
 * @filename: name of the file where text is to be appended
 * @text_content: content to be appended at the end of the file
 * Return: 1 if file exists or -1 if fails or file doesnt exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file = open(filename, O_WRONLY | O_APPEND);
	int letters, read_write;

	if (!filename)
		return (-1);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		read_write = write(file, text_content, letters);
		if (read_write == -1)
			return (-1);
	}
	close(file);
	return (1);
}
