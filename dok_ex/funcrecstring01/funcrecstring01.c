#include <stdio.h>

void PutData(char *pszParam)
{
	//���ڿ��� ���̸� �� �̻� ���ȣ�� ���� �ʰ� ��ȯ�Ѵ�.
	if (*pszParam == '\0')
		return;

	//���� �� ������ ���� ������ �ٲٸ� ���ڿ��� �������� ��µȴ�.
	PutData(pszParam + 1);
	putchar(*pszParam);
	//���� ���ڸ� ����Ű�� �ּҸ� �Ű������� ���ȣ���Ѵ�.
	//PutData(pszParam + 1);
}

int main(void)
{
	PutData("TestData");
	putchar('\n');
	return 0;
}

