#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 f it does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int ltrs;
	int rw;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (ltrs = 0; text_content[ltrs]; ltrs++)
			;

		rw = write(f, text_content, ltrs);

		if (rw == -1)
			return (-1);
	}

	close(f);

	return (1);
}
