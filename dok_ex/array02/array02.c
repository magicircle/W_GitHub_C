#include <stdio.h>

int main(void)
{
	//��Ұ� 5���� int�� �迭�� ���� �� ����.
	int aList[5] = { 10, 20, 30, 40, 50 };
	int i = 0;

	//��ü ����� ���� ȭ�鿡 ���.
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	putchar('\n');

	//�Ϻ� �迭 ����� ���� ����.
	aList[0] = 100;
	aList[3] = 200;

	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	putchar('\n');

	return 0;
}

