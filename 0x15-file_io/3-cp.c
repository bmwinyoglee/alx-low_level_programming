#include "main.h"

#define MAXSIZE 1204
#define SE STDERR_FILENO

/**
 * main - create the copy bash script
 * @ac: argument count
 * @av: arguments as strings
 * Return: 0
 * Bravo-Dev
 */
int main(int ac, char *av[])
{
	int input_fileData, output_fileData, inStatus, outStatus;
	char buf[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	input_fileData = open(av[1], O_RDONLY);
	if (input_fileData == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);
	output_fileData = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (output_fileData == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
		inStatus = read(input_fileData, buf, MAXSIZE);
		if (inStatus == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (inStatus > 0)
		{
			outStatus = write(output_fileData, buf, (ssize_t) inStatus);
			if (outStatus == -1)
			{
				dprintf(SE, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	} while (inStatus > 0);
	inStatus = close(input_fileData);
	if (inStatus == -1)
		dprintf(SE, "Error: Can't close fd %d\n", input_fileData), exit(100);
	outStatus = close(output_fileData);
	if (outStatus == -1)
		dprintf(SE, "Error: Can't close fd %d\n", output_fileData), exit(100);
	return (0);
}
