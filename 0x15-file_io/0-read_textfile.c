#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* read_textfile - reads file content and write to POSIX standard output
* @filename: name of file to read
* @letters: number of letters to read and print
* Return: Always 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t bytes_read, bytes_written, num_bytes_read = 0;
	int descriptor;

	if (filename == NULL)
		return (0);

	buff = (char *) malloc(letters * sizeof(char));
	if (buff == NULL)
		return (0);

	descriptor = open(filename, O_RDONLY);
	if (descriptor == -1)
	{
		free(buff);
		return (0);
	}

	while ((bytes_read = read(descriptor, buff, letters)) > 0)
	{
		num_bytes_read += bytes_read;
		bytes_written = write(STDOUT_FILENO, buff, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(descriptor);
			free(buff);
			return (0);
		}
	}

	if (bytes_read == -1)
	{
		close(descriptor);
		free(buff);
		return (0);
	}

	close(descriptor);
	free(buff);
	return (num_bytes_read);
}
