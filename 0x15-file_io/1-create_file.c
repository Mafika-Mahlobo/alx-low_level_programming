#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
* create_file - creates file and write text to it
* @filename: name of file to be created
* @text_content: text to write
* Return: Always 0
*/
int create_file(const char *filename, char *text_content)
{
	int descriptor, flags, mode, bytes_written;
	ssize_t bytes_read;

	if (filename == NULL)
		return (-1);
	flags = O_CREAT | O_WRONLY | O_TRUNC;
	mode = S_IRUSR | S_IWUSR;

	descriptor = open(filename, flags, mode);

	if (descriptor == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_read = 0;
		while (text_content[bytes_read] != '\0')
			bytes_read++;

		bytes_written = write(descriptor, text_content, bytes_read);
		if (bytes_written == (-1) || bytes_written != bytes_read)
		{
			close(descriptor);
			return (-1);
		}
	}
	close(descriptor);
	return (1);
}
