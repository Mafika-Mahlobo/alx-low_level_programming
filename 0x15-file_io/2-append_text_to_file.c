#include <fcntl.h>
#include <unistd.h>

/**
* append_text_to_file - appends text to a file
* @filename: name of file
* @text_content: text to be appended
* Return: Always 0
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int descriptor, length = 0;

	if (filename == NULL || text_content == NULL)
		return (-1);

	descriptor = open(filename, O_WRONLY | O_APPEND);
	if (descriptor == -1)
		return (-1);

	while (text_content[length] != '\0')
		length++;

	if (write(descriptor, text_content, length) == -1)
	{
		close(descriptor);
		return (-1);
	}

	close(descriptor);
	return (1);
}
