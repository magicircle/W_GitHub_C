#include <stdio.h>

int main(void)
{
	char cOperator = 0;
	int x = 0, y = 0, nResult = 0;

	//����ڷκ��� ������� �Է� �޴´�.
	scanf("%d%c%d", &x, &cOperator, &y);

	//�����ڰ� �������� '����'�Ѵ�.
	switch (cOperator)
	{
		//nOperator == '+' ����� ����.
	case '+':
		nResult = x + y;
		//���� ������ �Ѿ�� �ʰ� switch-case ����� �����!
		break;

	case '-':
		nResult = x - y;
		break;

	case '*':
		nResult = x * y;
		break;

	case '/':
		nResult = x / y;
		break;

	//��� �� ���� ��쿡 �ش����� �ʴ� ������ ���.
	default:
		puts("ERROR: �� �� ���� ��� �����Դϴ�.");
	}

	printf("Result: %d\n", nResult);
	return 0;
}

