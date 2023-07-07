#include <stdio.h>

int main(int argc, char *argv[])
{
	int u;

	{
		for (u = 0; u < argc; u++)
		{
			printf("%s\n", argv[u]);
		}
	}
	return (0);
}
