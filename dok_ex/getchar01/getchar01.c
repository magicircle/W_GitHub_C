#include <stdio.h>

int main(void)
{
	//�ڷ����� char�����̰� �̸��� ch�� ������ ���� �� ����.
	char ch = 0;

	//getchar() �Լ��� ��ȯ�� ���� ch������ �����Ѵ�.
	ch = getchar();
	//���� ch�� ��� �ִ� ������ ȭ�鿡 ����Ѵ�.
	putchar(ch);
	//�빮�� Z�� ȭ�鿡 ����Ѵ�.
	putchar('Z');
	//0�� ��ȯ�ϰ� main()�� ��ȯ�Ѵ�. (���α׷� ����)
	return 0;
}
