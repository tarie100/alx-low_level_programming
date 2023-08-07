#include<stddef.h>
#include<stdio.h>
#include"main.h"
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
/**
 * create_file - creates a file
 * @filename: file
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytes = write(file, text_content, strlen(text_content));
		if (bytes == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
