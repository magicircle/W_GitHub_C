#include <stdio.h>

int main(void)
{
	char szName[32] = { 0 };
	int nAge = 0;

	//����ڷκ��� ������ �Է� �޾� nAge������ �����Ѵ�.
	printf("���̸� �Է��ϼ���. : ");
	scanf("%d", &nAge);

	//�̸� �߰��� �� ������ �ִ���� �������� �Է��� �� �ִ�.
	printf("�̸��� �Է��ϼ���. : ");
	gets(szName);

	//�̸��� ���̸� ����Ѵ�.
	printf("%d, %s\n", nAge, szName);
	return 0;
}


