#include <stdio.h>
#include "main.h"

/**
 * main - Prints the nname of the program
 * @argc: number of arguments
 * @argv: arra of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
