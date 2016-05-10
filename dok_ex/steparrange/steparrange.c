#include <stdio.h>

int main(void)
{
	int nFee = 1000, nAge = 0;
	double nRate = 0.0;

	scanf("%d", &nAge);
	if (nAge >= 65)		nRate = 0.0;
	else if (nAge >= 20)		nRate = 1.0;
	else if (nAge >= 14)		nRate = 0.75;
	else if (nAge >= 4)			nRate = 0.5;
	else						nRate = 0.0;

	printf("최종요금: %d원\n", (int)(nFee * nRate));
	return 0;
}


