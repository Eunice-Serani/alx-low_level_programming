#include "main.h"

/**
 * append_text_to_file - this appends a text at the end of a file
 * @filename: points to the name of a file
 * @text_content: string to add to the end of a file
 *
 * Return: if function fails or filename is NULL --1
 * if file does not exist the user does not have write permissions --1
 * Otherwise - 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
