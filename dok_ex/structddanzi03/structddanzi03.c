#include <stdio.h>

//USERDATA ����ü ���� �� ���缱��.
typedef struct USERDATA
{
	char szName[32];
	char szPhone[32];
	//USERDATA ����ü�� ����ų �� �ִ� �����͸� ����� ����!
	struct USERDATA *pNext;
} USERDATA;

int main(void)
{
	//�� ���� USERDATA ����ü �ν��Ͻ� ���� �� ����.
	USERDATA user = { "�����", "1234", NULL };
	USERDATA newUser = { "������", "2345", NULL };

	//pNext ����� �̿��� �� �ν��Ͻ��� '����'�Ѵ�!!!
	user.pNext = &newUser;

	printf("%s, %s\n", user.szName, user.szPhone);
	//pNext ����� �̿��� ������ '����' �ν��Ͻ��� �����Ѵ�.
	printf("%s, %s\n", user.pNext->szName, user.pNext->szPhone);
	return 0;
}


