#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd = open("file.txt", O_RDONLY);
	unsigned long tabs, spaces, nl;
	tabs = spaces = nl = 0;
	char buff;
	while (read(fd, &buff, 1) && buff != EOF)
	{
		if (buff == ' ')
			++spaces;
		if (buff == '\t')
			++tabs;
		if (buff == '\n')
			++nl;
	}
	close(fd);
	printf("Tabs: %ld, Spaces: %ld, NL: %ld.\n", tabs, spaces, nl);
}

