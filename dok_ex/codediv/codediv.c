#include <stdio.h>

int GetData(void)
{
	int nInput = 0;
	printf("������ �Է��ϼ���. : ");
	scanf("%d", &nInput);

	return nInput;
}

int GetMax(int a, int b, int c)
{
	int nMax = a;
	if (b > nMax)	nMax = b;
	if (c > nMax)	nMax = c;

	return nMax;
}

void PrintData(int a, int b, int c, int nMax)
{
	printf("%d, %d, %d �� ���� ū ���� %d �Դϴ�.\n", a, b, c, nMax);
}

int main(void)
{
	int aList[3] = { 0 };
	int nMax = -9999, i = 0;
	//�Է�
	for (i = 0; i < 3; ++i)
		aList[i] = GetData();

	//�ִ� ���
	nMax = GetMax(aList[0], aList[1], aList[2]);

	//���
	PrintData(aList[0], aList[1], aList[2], nMax);
	return 0;
}


