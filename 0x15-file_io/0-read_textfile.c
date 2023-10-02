#include "main.h"

/**
 *read_textfile - function reads a text file and prints it to standard output.
 *@filename: the name of the file to read
 *@letters:  number of letters it should read and print
 *Return: actual number of letters it could read and print or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = open(filename, O_RDONLY);
	char *content;
	ssize_t read_bytes, write_bytes;

	if (filename == NULL)
		return (0);

	if (file == -1)
		return (0);

	content = (char *)malloc(sizeof(char) * letters);
	if (content == NULL)
		return (0);

	read_bytes = read(file, content, letters);
	write_bytes = write(STDOUT_FILENO, content, read_bytes);

	if (write_bytes == -1)
		return (0);

	close(file);
	free(content);
	return (write_bytes);
}
