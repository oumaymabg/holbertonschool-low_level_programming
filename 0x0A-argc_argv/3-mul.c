#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*main - 0
*@argc: number_of_strings
*@argv: number_of_arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
