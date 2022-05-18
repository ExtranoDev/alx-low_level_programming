#include "variadic_functions.h"

/**
 * print_all - print all type of strings
 * @format: format of string inputed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list vl;
	char *str;
	int i = 0, x = 0;

	va_start(vl, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(vl, int));
				x = 1;
				break;
			case 'i':
				printf("%d", va_arg(vl, int));
				x = 1;
				break;
			case 'f':
				printf("%f", va_arg(vl, double));
				x = 1;
				break;
			case 's':
				str = va_arg(vl, char *);
				if (!str)
				{
					printf("(nil)");
					x = 1;
					break;
				}
				printf("%s", str);
				x = 1;
				break;
		}

		if (format[i + 1] != '\0' && x == 1)
			printf(", ");
		x = 0;
		i++;
	}

	printf("\n");
	va_end(vl);
}
