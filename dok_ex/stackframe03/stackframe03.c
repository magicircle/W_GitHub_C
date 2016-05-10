#include <stdio.h>

int main(int argc, char* argv[])
{
	int aList[3] = { 10, 20, 30 };
	int *pnData = aList;

	*(pnData + 1) = 100;
	return 0;
}

