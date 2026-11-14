#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	int fd = open("file.txt", O_RDONLY);
    int i, nwhite = 0, nother = 0;
	char c;
	int ndigit[10];
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;
	while(read(fd, &c, 1) == 1)
	{
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	}
	printf("Цифры = ");

	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", символы разделители = %d, other = %d\n", nwhite, nother);
	close(fd);
}

