#include <stdio.h>


int main(int argc, char **argv)
{

	printf("Hello World!");

	if (argc)
	{
		printf("%s", argv[1]);
	}
	return (0);
}

