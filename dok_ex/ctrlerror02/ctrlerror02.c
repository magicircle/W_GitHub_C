#include <stdio.h>

int main(void)
{
	int nAge = 0;

	scanf("%d", &nAge);
	if (nAge >= 20)
		printf("%d\n", nAge);
	nAge = 20;

	printf("Final: %d\n", nAge);
	return 0;
}

