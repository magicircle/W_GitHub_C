#include <stdio.h>

int main(void)
{
	int x = 0, nInput = 0;
	scanf("%d", &nInput);

	//nInput ������ ����� ����ڰ� �Է��� ���� x�� �����Ѵ�.
	//x�� ����ִ� ���� Overwrite�ǰ� �������.
	x = nInput;
	printf("%d\n", x);
	return 0;
}


