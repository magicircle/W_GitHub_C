#include <stdio.h>

int main(void)
{
	int nMax = 0, nInput = 0;

	scanf("%d", &nMax);

	scanf("%d", &nInput);
	if (nInput > nMax)	nMax = nInput;

	scanf("%d", &nInput);
	if (nInput > nMax)	nMax = nInput;

	printf("MAX : %d\n", nMax);
	return 0;
}

