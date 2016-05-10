#include <stdio.h>

int main(void)
{
	int nTotal = 0, i = 0;

	while (i < 10)
		nTotal += ++i;

	printf("Total: %d\n", nTotal);
	return 0;
}


