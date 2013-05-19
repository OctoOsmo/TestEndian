// Test endian.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdio.h"


int _tmain(int argc, _TCHAR* argv[])
{
	short x = 1;
	//char str;
	//str = ((char) x = 0
	printf("your endian is: %s\n", ((char) x == 0) ? "big endian" : "little endian");
	getchar();
	return 0;
}


