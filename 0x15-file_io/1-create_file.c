#include "main.h"

/**
 * create_file - function creates a file with read write permission for owner
 * @filename: name of the file to be created
 * @text_content: content to be copied to the file
 * Return: 1 if suceesful or -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	ssize_t letters, read_write;

	if (!filename)
		return (-1);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;
	read_write = write(file, text_content, letters);

	if (read_write == -1)
		return (-1);

	close(file);
	return (1);
}
