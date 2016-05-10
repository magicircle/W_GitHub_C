#include <stdio.h>

int main(int argc, char* argv[])
{
	int x = 10, y = 20;
	int *pnData = &x;

	*pnData = 100;
	return 0;
}

