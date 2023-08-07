#include<stddef.h>
#include<unistd.h>
#include"main.h"
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file
 * @text_content: string to add at the end
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytes;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fp);
		return (-1);
	}
	bytes = write(fp, text_content, strlen(text_content));
	if (bytes == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
