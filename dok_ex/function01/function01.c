#include <stdio.h>

//����� ���� �Լ��� ���� �� ����
//int ���� �ڷ� ���� �Ű������� �޾� �ջ����� ��ȯ�Ѵ�.
int Add(int a, int b)
{
	//Add() �Լ��� �������� ���� �� ����
	int nData = 0;
	nData = a + b;

	//�ջ����� ȣ���� �Լ����� '��ȯ'�Ѵ�.
	return nData;
}

int main(void)
{
	int nResult = 0;

	//Add() �Լ��� ���μ� 3�� 4�� Ȯ���� ȣ���ϰ� �����
	//'��ȯ' �޾� nResult�� �����Ѵ�.
	nResult = Add(3, 4);
	printf("Result: %d\n", nResult);
	return 0;
}

