#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints program's name
 * @argc: argument count
 * @argv: argument vector
 * Return: program's name
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
