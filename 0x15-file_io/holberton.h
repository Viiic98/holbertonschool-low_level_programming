#ifndef FILE_IO
#define FILE_IO
#define BUFFER 1024
/* libraries */
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/* Function prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* side functions */
void _error_origin(char *file);
void _error_copy(char *file);
void _error_close(char *file);
#endif
