#include <stdio.h>

//���� ���� �Ű������� �ް� �ִ��� ��ȯ�ϴ� �Լ� ���� �� ����
int GetMax(int a, int b, int c)
{
	//GetMax() �Լ��� �������� ���� �� ����.
	int nMax = a;
	if (b > nMax)	nMax = b;
	if (c > nMax)	nMax = c;

	return nMax;
}

int main(void)
{
	int nResult = 0;

	//�Լ��� ��ȯ�� ���� %d �������� ����Ѵ�.
	printf("MAX: %d\n", GetMax(1, 2, 3));

	//�Լ��� ��ȯ�� ���� * 2 ������ �����ϰ� %d �������� ����Ѵ�.
	printf("MAX: %d\n", GetMax(2, 3, 1) * 2);

	//�Լ��� ��ȯ�� ���� nResult ������ ������ ��
	//nResult�� ����� ���� %d �������� ����Ѵ�.
	printf("MAX: %d\n", nResult = GetMax(3, 1, 2));
	return 0;
}

