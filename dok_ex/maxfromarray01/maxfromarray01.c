#include <stdio.h>

int main(void)
{
	int aList[5] = { 30, 10, 40, 20, 50 };
	//�迭�� ù ��° ��Ҹ� �ִ����� �����Ѵ�.
	int i = 0, nMax = aList[0];

	//���� �� ��° ��Һ��� ������ ��ұ��� ���Ѵ�.
	for (i = 1; i < 5; ++i)
		if (aList[i] > nMax)
			nMax = aList[i];

	//��ü ��� �� �ִ��� ����Ѵ�.
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	putchar('\n');
	printf("MAX: %d\n", nMax);
	return 0;
}

