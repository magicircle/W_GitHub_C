#include <stdio.h>

void main()
{
	//���� ��� �ʿ��� FILE ����ü�� ���� ������ ���� ���� �� ����.
	FILE *fp = NULL;
	//test.txt ������ ���� ���� ����. ��, ���� �̸��� ������ �̹�
	//�����ϸ� ����(ũ�⸦ 0���� ����)�ϰ� �� ������ �����Ѵ�.
	//���ٸ� ���� �����Ѵ�.
	fp = fopen("Test.txt", "w");
	if (fp == NULL)
	{
		puts("ERROR: Failed to open file!");
		return;
	}

	//TODO: File I/O

	//������ ������ �ݴ´�.
	fclose(fp);
}


