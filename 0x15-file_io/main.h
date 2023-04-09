#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

extern ssize_t read_textfile(const char *filename, size_t letters);
extern int create_file(const char *filename, char *text_content);
extern int append_text_to_file(const char *filename, char *text_content);


#endif
