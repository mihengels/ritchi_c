#include <stdio.h>

int main()
{
	int c;
	int ns = 0;
	while ((c = getchar()) != EOF)
	{
        if (ns == 0 || c != ' ')
		{
			putchar(c);
		}
		if (c == ' ')
		{
			++ns;
		}
		else
		{
			ns = 0;
		}
	}
}

