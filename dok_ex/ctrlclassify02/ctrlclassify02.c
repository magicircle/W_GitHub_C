#include <stdio.h>

int main(void)
{
	int nInput = 0;
	//�ϴ� A�������� �����Ѵ�.
	char ch = 'A';
	printf("������ �Է��ϼ���.: ");
	scanf("%d", &nInput);

	//ù ��° ����(A����)�� �´��� Ȯ���Ѵ�.
	if (nInput >= 90)
		ch = 'A';
	//�ƴ϶�� �� ���� ���ؿ� �´��� Ȯ���Ѵ�.
	else if (nInput >= 80)
		ch = 'B';
	//���� ���� �ݺ��Ѵ�.
	else if (nInput >= 70)
		ch = 'C';
	else if (nInput >= 60)
		ch = 'D';
	//�ռ� ���ǿ� �����ϴ� ���� �ϳ��� ���� ����̴�.
	else
		ch = 'F';

	printf("����: %d, ����: %c\n", nInput, ch);
	return 0;
}



