#include <stdio.h>

int main(void)
{
	char szBuffer[32] = { 0 };
	int nLength = 0;

	//�̸��� �Է� �޾� �迭�� �����Ѵ�.
	printf("Input your name : ");
	gets(szBuffer);

	//�迭�� ���ۺ��� '\0'�� ���� ������ ��� �������� �ѱ�� Ȯ���Ѵ�.
	while (szBuffer[nLength] != '\0')
		nLength++;

	//�̸��� ���ڿ��� ���̸� ����Ѵ�.
	printf("Your name is %s(%d).\n", szBuffer, nLength);
	return 0;
}

