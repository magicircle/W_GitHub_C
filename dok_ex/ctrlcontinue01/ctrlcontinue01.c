#include <stdio.h>

int main(void)
{
	int i = 0;

	//i�� 10�� �Ǹ� �ݺ����� �������� �ʴ´�.
	for (i = 0; i < 10; ++i)
	{
		if (i > 4)
			continue;

		//i�� 5�� �Ǵ� �������� �� �ڵ�� ������� �ʴ´�!
		printf("%dth\n", i);
	}

	printf("END: i == %d\n", i);
	return 0;
}

