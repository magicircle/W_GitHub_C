#include <stdio.h>

//�̷� �Լ��� �ִٴ� ����� �����Ϸ����� '�켱' �˸���. (����)
int Add(int, int);

int main(void)
{
	//Add() �Լ��� �����Ѵٴ� ����� �����Ϸ��� �˰� �����Ƿ�
	//������ ������ �߻����� �ʴ´�.
	printf("%d\n", Add(3, 4));
	return 0;
}

//���� ���� �̾��� �Լ� '����'
int Add(int x, int y)
{
	return x + y;
}

