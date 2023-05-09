#include "main.h"

/**
 * create_file - create a file with read/write access for user
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 * bravo-dev
 */
int create_file(const char *filename, char *text_content)
{
	int fileData, rstate, i;

	if (filename == NULL)
		return (-1);

	fileData = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fileData == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		rstate = write(fileData, text_content, i);
		if (rstate == -1)
			return (-1);
	}

	close(fileData);
	return (1);
}
