#include <stdio.h>

int* TestFunc(void)
{
	int nData = 10;
	//�Լ��� ��ȯ�ϸ� �Ҹ��� �ڵ������� �ּҸ� ��ȯ�Ѵ�.
	return &nData;
}

int main(int argc, char* argv[])
{
	int *pnResult = NULL;
	pnResult = TestFunc();

	//�����Ͱ� ����Ű�� ��� �޸𸮴� ��ȿ���� ���� �޸��̴�.
	printf("%d\n", *pnResult);
	return 0;
}


