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
	printf("Size of char: %i bytes\n", sizeof(char));
	printf("Size of short: %i bytes\n", sizeof(short));
	printf("Size of int: %i bytes\n", sizeof(int));
	printf("Size of long: %i bytes\n", sizeof(long));
	printf("Size of long long: %i bytes\n", sizeof(long long));
	printf("Size of float: %i bytes\n", sizeof(float));
	printf("Size of double: %i bytes\n", sizeof(double));
	printf("Size of long double: %i bytes\n", sizeof(long double));
	return (0);
}
