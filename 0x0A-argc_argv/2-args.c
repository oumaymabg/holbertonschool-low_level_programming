#include <stdio.h>
/**
  * main - entry point
  * @argc: number_in_string
  * @argv: nuber_in_array
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
