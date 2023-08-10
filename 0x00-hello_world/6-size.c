#include <stdio.h>

/**
* main - Entry ponit
*
* print the size of char, int, long int, long long int, float
*
* Return: Always 0 (Sucess)
*/

int main(void)
{
	printf("Size of char: %i byte(s)\n", sizeof(char));
	printf("Size of int: %i byte(s)\n", sizeof(int));
	printf("Size of long: %i byte(s)\n", sizeof(long int));
	printf("Size of long long: %i bytes\n", sizeof(long long int));
	printf("Size of float: %i bytes\n", sizeof(float));
	return (0);
}
