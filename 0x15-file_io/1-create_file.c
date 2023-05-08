#include "main.h"
/**
 * create_file - Creates a file with the specified text content
 * @filename: Name of the file to create
 * @text_content: Content to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int f, i;

if (filename == NULL)
return (-1);
f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (f == -1)
return (-1);
if (text_content != NULL)
{
for (i = 0; text_content[i]; i++)
continue;
if (write(f, text_content, i) != i)
{
close(f);
return (-1);
}
}

close(f);
return (1);
}
