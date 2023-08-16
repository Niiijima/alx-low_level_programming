#include <main.h>

/**
  * main - check the code
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char ch = '1';

	if (_isalph(ch))
	{
		printf("%c is an alphabet character\n", ch);
	}
	else
	{
		printf("%c is not alphabetic character\n", ch);
	}
	return (0);
}
