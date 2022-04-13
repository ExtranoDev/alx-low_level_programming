#include "main.h"

/**
 * print_to_98 - Make sure it prints 98 from number backward or forward
 *@i: first int input
 *
 */
void print_to_98(int i)
{
	if (i < 98)
	{
		while (i <= 98)
		{
			if (i == 98)
			{
				printf("%d\n", i);
				break;
			}

			printf("%d, ", i);
			i++;
		}
	}
	else if (i > 98)
	{
		while (i >= 98)
		{
			if (i == 98)
			{
				printf("%d\n", i);
				break;
			}

			printf("%d, ", i);
			i--;
		}
	}
	else
	{
		printf("%d\n", i);
	}
}

