#include <stdio.h>

int main(void)
{
	char ch = 'A';

	if (_islower(ch))
	{ 
		printf ("%c is a lowercase character\n", ch);
	}
	return 0;
}
