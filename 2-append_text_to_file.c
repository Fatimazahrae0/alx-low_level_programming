#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file to append to
 * @text_content: Text to append to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int f, i, len;

if (filename == NULL)
return (-1);


fd = open(filename, O_WRONLY | O_APPEND);
if (f == -1)
return (-1);

if (text_content != NULL)
{

for (len = 0; text_content[len]; len++)
continue;

if (write(f, text_content, len) != len)
{

close(f);
return (-1);
}


}

close(f);
return (1);
}
