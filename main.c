#include <stdio.h>


int main(int argc, char **argv)
{
const int my = 2;
const int * const a = &my;


	printf("Hello World!");

	if (argc)
	{
		printf("out %s %d", argv[1], *a);
	}

	return (0);
}

