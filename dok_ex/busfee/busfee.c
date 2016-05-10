#include <stdio.h>

int main(void)
{
	int nAge = 0, nFee = 1000;

	printf("나이를 입력하세요. : ");
	scanf("%d", &nAge);

	if (nAge < 20)
		nFee = nFee * 75 / 100;

	printf("최종요금: %d원\n", nFee);
	return 0;
}


