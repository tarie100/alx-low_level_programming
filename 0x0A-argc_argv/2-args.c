#include<stdio.h>
#include<stdlib.h>
/**
 * main - returns all the arguments it receives
 * @argv: argument vector
 * @argc: argument count
 * Return: args
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
