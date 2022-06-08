#include <unistd.h>
#include <stdio.h>

int main()
{
	char *argv[] = {"./if", NULL};

	if (execve(argv[0], argv, NULL) == -1)
	{
		printf("Error :( :)\n");
	}
	printf("Prints After party... :) :) :)\n");
}
