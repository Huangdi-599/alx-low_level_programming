#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: -1 on failure and 1 on sucesss
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int opened, red, wrote;
char *buf;
if (filename == NULL)
{
return (0);
}
opened = open(filename, O_RDONLY);
if (opened == -1)
{
return (0);
}
buf = malloc(sizeof(char) * letters + 1);
if (buf == NULL)
{
return (0);
}
red = read(file, buf, letters);
if (red == -1)
{
return (0);
}
buf[letters] = '\0';
wrote = write(1, buf, rd);
if (wrote == -1)
{
return (0);
}
close(opened);
free(buf);
return (wrote);
}
