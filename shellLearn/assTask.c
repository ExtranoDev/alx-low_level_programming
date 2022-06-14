#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checkExist(int arr[], int num, int count);
/**
 * main - assigns tasks to group members :)
 *
 * Return: o on sucess
 */
int main()
{
	int i = 0, randnum, isTrue, count = 0;
	int a[11];

	srand(time(NULL));
	while (i < 6)
	{
		randnum = rand() % 10;
		if (i > 0 && checkExist(a, randnum, count))
			continue;
		if (randnum != 1 && randnum != 2 && randnum != 3 && randnum != 4)
		{
			a[i] = randnum;
			i++;
			count++;
		}
	}

	for (i = 0; ; i++)
	{
		isTrue = 1;
		randnum = rand() % 10;
		if (i < 4)
		{
			while (isTrue)
			{
				if (checkExist(a, randnum, count))
				{
					randnum = rand() % 10;
					continue;
				}
				isTrue = 0;
				printf("%d : %d\n", a[i], randnum);
				a[count] = randnum;
				count++;
			}
		}
		else
		{
			printf("%d : %d\n", a[i], a[i + 1]);
			break;
		}
	}

	return (0);
}

/**
 * checkExist - check if num in list
 * @arr: array
 * @num: number to be checked
 * @count: number of count
 */
int checkExist(int arr[], int num, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		if (arr[i] == num)
			return (1);
	}
	return (0);
}
