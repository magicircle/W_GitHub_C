#include <stdio.h>

int main(void)
{
	int nAge = 0, nFee = 1000;

	printf("���̸� �Է��ϼ���. : ");
	scanf("%d", &nAge);

	if (nAge < 20)
		nFee = nFee * 75 / 100;

	printf("�������: %d��\n", nFee);
	return 0;
}


