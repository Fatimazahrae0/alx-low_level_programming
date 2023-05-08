#ifndef MAIN_H
#define MAIN_H
/*libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>



/*function prototypes*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);


#endif /*main.h*/
