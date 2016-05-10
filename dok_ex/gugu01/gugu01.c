#include <stdio.h>

int main(void)
{
	int nInput = 0, i = 1;

	scanf("%d", &nInput);
	if (nInput >= 2 && nInput <= 9)
	{
		while (i < 10)
		{
			printf("%d * %d = %d\n", nInput, i, nInput * i);
			i++;
		}
	}
	else
		puts("ERROR");

	return 0;
}

