#include <stdio.h>

int main(void)
{
	int nInput = 0;				//1��
	//1�� nInput�� ����
	scanf("%d", &nInput);

	if (nInput > 10)
	{
		int nInput = 20;		//2��
		//2�� nInput�� ���
		printf("%d\n", nInput);

		if (nInput < 20)
		{
			int nInput = 30;	//3��
			//3�� nInput�� ���.
			//���� �ֱٿ� ����� ���� �켱�Ѵ�!
			printf("%d\n", nInput);

			//3�� nInput�� ���⼭ �Ҹ��Ѵ�.
		}

		//2�� nInput�� ���⼭ �Ҹ��Ѵ�.
	}

	//1�� nInput�� ���
	printf("%d\n", nInput);

	//1�� nInput�� ���⼭ �Ҹ��Ѵ�.
	return 0;
}


