#include <stdio.h>

int main(void)
{
	int nData = 10;

	//sizeof �������� �ǿ����ڴ� �ڷ����̴�.
	printf("%d, %d, %d\n", sizeof(5), sizeof(nData), sizeof(int));
	printf("%d, %d\n", sizeof('A'), sizeof(char));
	printf("%d, %d\n", sizeof(123.45F), sizeof(123.45));

	//����� �ᱣ���� �ڷ����� ũ�⸦ �����Ѵ�.
	printf("%d, %d\n", sizeof(nData + 10), sizeof(++nData));
	printf("%d\n", nData);
	return 0;
}

