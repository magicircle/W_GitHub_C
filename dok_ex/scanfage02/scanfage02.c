#include <stdio.h>

int main(void)
{
	char szName[32] = { 0 };
	int nAge = 0;

	//����ڷκ��� ���̸� �Է� �޴´�.
	//�� ��, �Է��� �ϷḦ �ǹ��ϴ� EnterŰ(\n)�Է��� ���ۿ� ���´�.
	printf("���̸� �Է��ϼ���. : ");
	scanf_s("%d", &nAge);

	printf("�̸��� �Է��ϼ���. : ");
	//���� �ȿ� �����ִ� �͵��� ��� ��� �� �̸��� �Է� �޴´�.
	//���� ���๮��(\n)�� ���ŵȴ�.
	fflush(stdin);
	gets_s(szName, sizeof(szName));

	printf("%d, %s\n", nAge, szName);
	return 0;
}


