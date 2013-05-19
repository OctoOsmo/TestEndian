#include "stdio.h"

int main(void)
{
	short x = 0x01;
	printf("your endian is: %s\n", ((char) x == 0) ? "big endian" : "little endian");
	printf("x = %c\n", (char) x);
	for(int i = 1; i < 50; ++i)
	{
		printf("symbol ¹%d = %c\n", i, (char) i);
	}
	getchar();
	return 0;
}


