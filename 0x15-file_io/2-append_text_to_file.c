#include "main.h"

/**
 * append_text_to_file - Append text to the end of a file
 * @filename: name of file
 * @text_content: string to add to end of file
 * Return: 1 on success, -1 on failure
 * bravo-dev
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileData, state, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fileData = open(filename, O_APPEND | O_WRONLY);
	if (fileData == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	state = write(fileData, text_content, i);
	if (state == -1)
		return (-1);

	close(fileData);
	return (1);
}
