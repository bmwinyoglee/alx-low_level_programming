#include "main.h"

/**
 * read_textfile - Read a text file and print to POSIX stdout
 * @filename: char string of files name
 * @letters: number of letters to read and print
 * Return: number of letters read and printed, or 0 if error
 * bravo-dev
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileData;
	ssize_t rcount, wcount;
	char *buffer;

	if (filename == NULL)
		return (0);

	fileData = open(filename, O_RDWR);
	if (fileData == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	rcount = read(fileData, buffer, letters);
	if (rcount == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buffer, rcount);
	if (wcount == -1 || rcount != wcount)
		return (0);
	free(buffer);

	close(fileData);
	return (wcount);
}
