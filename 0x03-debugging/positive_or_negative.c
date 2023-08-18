#include "main.h"
/**
 * main - Determine if the number is positive, negative or zero.
 *
 *Return: Always 0 (Sucess)
 */
void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}

	return ;
}
