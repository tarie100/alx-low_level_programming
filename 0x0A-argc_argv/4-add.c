#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * main - adds +ve numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: sum
 */
int main(int argc, char **argv)
{
	unsigned int n1 = 0;
	unsigned int n2 = 0;
	int i;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];
			for (n1 = 0; n1 < strlen(e); n1++)
			{
				if (e[n1] < 48 || e[n1] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			n2 += atoi(e);
			e++;
		}
		printf("%d\n", n2);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
