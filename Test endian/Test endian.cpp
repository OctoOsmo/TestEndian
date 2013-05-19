#include "stdio.h"

int main(void)
{
	short x = 1;
	printf("your endian is: %s\n", ((char) x == 0) ? "big endian" : "little endian");
	getchar();
	return 0;
}


