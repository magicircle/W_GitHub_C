#include <stdio.h>

int main(void)
{
	int x = 5, y = 10;

	printf("%d\n", x == y);
	printf("%d\n", x != y);
	printf("%d\n", x > 5);
	printf("%d\n", y < 5);

	//10�� 10���� 'ũ�ų� ����'������ '��'�̴�.
	printf("%d\n", y >= 10);
	//��������� ���迬�꺸�� �켱�Ѵ�.
	//�׷��Ƿ� x + 5���� ����� ���迬�꿡 �����Ѵ�.
	printf("%d\n", y <= x + 5);
	return 0;
}


