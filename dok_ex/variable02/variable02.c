#include <stdio.h>

int TestFunc(void)
{
	//���ټ��� TestFunc() ���η� ���ѵ� ���������̳�
	//���η��� ������ �ƴ϶� ������ ������ '����'���� ���� �� ����.
	//���Ǵ� �� �Լ��� ���� �� ȣ��Ǵ��� �� �� ���� ����ȴ�.
	static int nData = 10;

	//nData�� ���� ����ƴ�.
	//���������̹Ƿ� �� ����� ���� �Լ��� ��ȯ�ϴ��� �����ȴ�.
	++nData;
	return nData;
}

int main(int argc, char* argv[])
{
	//TestFunc() �Լ��� ȣ���� ������ �ٸ� nData ���� ��ȯ �޴´�.
	printf("%d\n", TestFunc());
	printf("%d\n", TestFunc());
	printf("%d\n", TestFunc());
	return 0;
}


