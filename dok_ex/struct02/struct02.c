#include <stdio.h>
#include <string.h>

//����ü ���� �� ���缱��
typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];
} USERDATA;

int main(void)
{
	//���缱�� ���п� ������ ������ �� 'struct'�� ������ �� �ִ�.
	USERDATA user = { 0, "", "" };

	//����ü ��� ���� �� �� ä���.
	user.nAge = 10;
	strcpy(user.szName, "Hoon");
	strcpy(user.szPhone, "010-1234-1234");

	//����ü ��� ���� �� ���.
	printf("%d��, %s, %s\n", user.nAge, user.szName, user.szPhone);
	return 0;
}

