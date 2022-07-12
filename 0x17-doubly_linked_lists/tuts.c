#include <stdio.h>

int main()
{
	typedef struct variety
	{
		int n;
		char a;
		int *b;
	} variety;
	int i = 9;
	
	variety josh = {3, 'B', &i};

	printf("%d : %c : %p\n", josh.n, josh.a, josh.b);
}
