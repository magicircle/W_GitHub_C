#include <stdio.h>

int main(void)
{
	int nData = 10;
	printf("%s\n", "nData");

	//���� nData�� ����ִ� ���� ���.
	printf("%d\n", nData);
	//���� nData�� �޸� �ּҸ� ���.
	printf("%p\n", &nData);
	return 0;
}

