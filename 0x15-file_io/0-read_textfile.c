#include<stddef.h>
#include<unistd.h>
#include"main.h"
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file
 * @letters: number of letters to be read and printed
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes, w, t;
	char *buf;

	bytes = open(filename, O_RDONLY);
	if (bytes == -1)
	{
		return (-1);
	}
	buf = malloc(sizeof(char) * letters);
	t = read(bytes, buf, letters);
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(bytes);
	return (w);
}
