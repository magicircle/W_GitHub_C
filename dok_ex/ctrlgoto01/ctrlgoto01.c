#include <stdio.h>

int main(void)
{
	int nInput;

//���̺� �̸� ����. goto������ �̵��� �� �ִ� ����.
INPUT:
	printf("Input number : ");
	scanf("%d", &nInput);

	//����ڰ� �Է��� ���� 0~10 �������� �˻��ϰ� ���ǿ� ���� ������
	//INPUT ���̺�� �帧�� �����Ѵ�.
	if (nInput < 0 || nInput > 10)
		goto INPUT;

	puts("End");
	return 0;
}


