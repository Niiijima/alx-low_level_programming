#include <stdio.h>

/**
  * main - check the code.
  *
  * Return: Always 0 (Success)
  */
int main(void)

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return 1;
	}
	else
		if (n == 0)
		{
			printf("0");
			return 0;
		}
		else 
    {
	    printf("-");
	    return -1;
    }
	return (0);
}