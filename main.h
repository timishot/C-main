#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);

#endif
