#include <stdio.h>

int main(void)
{
	int nInput = 0, nSelect = 0;
	scanf("%d", &nInput);

	//	nSelect = nInput <= 10 ? 10 : 20;
	//3�� �����ڸ� �̿��� �Ͱ�  ������ ������ if else��
	if (nInput <= 10)
		nSelect = 10;	//���ǽ��� ���� ���.
	else
		nSelect = 20;	//���ǽ��� ������ ���.

	printf("%d\n", nSelect);
	return 0;
}

