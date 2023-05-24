#ifndef MAIN_H
#define MAIN_H
/*libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>


/*function prototypes*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void _error(int e, char *filename);
void cp(char *file_from, char *file_to);
#endif /*main.h*/
