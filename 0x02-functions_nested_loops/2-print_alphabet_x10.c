#include <stdio.h>

/**
  * main - void print_alphabet_x10(void);
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char letter = 'a';
	int count = 0; 

	while (count < 0)
	{
		int i;
		for (i = 0; i < 26; i++)
		{
			_putchar(letter + i);
		}
	count++;
	}
	_putcha('\n');
}
