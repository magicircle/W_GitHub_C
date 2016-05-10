#include <stdio.h>

int main(void)
{
	int nMax = 0;
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	nMax = a;
	nMax = b > nMax ? b : nMax;
	nMax = c > nMax ? c : nMax;

	printf("MAX : %d\n", nMax);
	return 0;
}


