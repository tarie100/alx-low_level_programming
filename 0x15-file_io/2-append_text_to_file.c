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
	int fp, w, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	w = write(fp, text_content, len);
	if (fp == -1 || w == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
