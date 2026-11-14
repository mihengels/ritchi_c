#include <stdio.h>

int main()
{
	unsigned long nc = 0;
	while (getchar() != EOF)
	{
		++nc;
	}
	printf("Count: %ld\n", nc);
}

