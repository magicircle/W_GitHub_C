#include <stdio.h>

int main(void)
{
	int nInput = 0;
	char chCredit = 'X';

	printf("������ �Է��ϼ���. : ");
	scanf("%d", &nInput);

	//�Ҽ��� ���ϰ� ����Ǹ� ����� '����'�̴�.
	switch (nInput / 10)
	{
	//90~100���� ��츦 ��� �� ���� ó���Ѵ�.
	case 10:
	case 9:
		chCredit = 'A';
		break;

	case 8:
		chCredit = 'B';
		break;

	case 7:
		chCredit = 'C';
		break;

	case 6:
		chCredit = 'D';
		break;

	default:
		chCredit = 'F';
	}

	printf("���� : %c\n", chCredit);
	return 0;
}

