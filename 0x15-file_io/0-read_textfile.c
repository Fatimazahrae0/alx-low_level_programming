#include "main.h"
/**
 * read_textfile - read a text file
 * @filename: the file holding the text
 * @letters: size of the file
 * Return: number of bytes read or 0 if an error occurred
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int f;
ssize_t readby;
char *c;

if (filename == NULL)
return (0);
f = open(filename, O_RDONLY);
if (f == -1)
return (0);
c = malloc(letters);
readby = read(f, c, letters);
if (readby == -1 || write(STDOUT_FILENO, c, readby) != readby)
{
free(c);
close(f);
return (0);
}
free(c);
close(f);
return (readby);
}
