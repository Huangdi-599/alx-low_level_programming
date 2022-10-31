#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
int opened, wrote, length = 0;
if (filename == NULL)
{
return (-1);
}
opened = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}
wrote = write(opened, text_content, length);
if (opened == -1 || wrote == -1)
{
return (-1);
}
close(opened);
return (1);
}
