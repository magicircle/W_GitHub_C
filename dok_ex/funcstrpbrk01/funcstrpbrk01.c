#include <stdio.h>
#include <string.h>

void main(void)
{
	char szBuffer[128] = { 0 };
	char szSet[128] = { 0 };
	char *pszStart = szBuffer;

	//�˻� ��� ���ڿ��� �Է� �޴´�.
	printf("Input string: ");
	gets(szBuffer);

	//ã�� '���ڵ�'�� �Է� �޴´�.
	printf("Input character set: ");
	gets(szSet);

	//��� ���ڿ��� ��ġ�ϴ� ���ڰ� �ִ��� �˻��Ѵ�.
	while ((pszStart = strpbrk(pszStart, szSet)) != NULL)
	{
		printf("[%p] Index: %d, %c\n",
			pszStart, pszStart - szBuffer, *pszStart);

		//��ġ�ϴ� �ϳ��� ã�����Ƿ� �������� �̵��ϰ� ��� ã�´�.
		pszStart++;
	}
}


