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
	int R_file;
	ssize_t bytes;
	char *buf;

	R_file = open(filename, O_RDONLY);
	if (R_file == -1)
	{
		return (-1);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(R_file);
		return (-1);
	}
	bytes = read(R_file, buf, letters);
	if (bytes == -1)
	{
		free(buf);
		close(R_file);
		return (-1);
	}
	write(STDOUT_FILENO, buf, bytes);
	close(R_file);
	free(buf);
	return (bytes);
}
