#include <stdio.h>

int __cdecl main(void)
{
	//void*�� �ּҴ� �����̵� ���� �� �ִ�.
	//�Լ��̸��� '�ּ�'�̹Ƿ� void*�� ���� �� �ִ�!
	void *pData = main;

	//�Լ��� �ּҸ� ����Ѵ�.
	printf("%p\n", main);
	printf("%p\n", pData);
	return 0;
}


