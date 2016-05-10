#include <stdio.h>

int main(void)
{
	int i = 0;

	//i가 10이 되면 반복문을 수행하지 않는다.
	for (i = 0; i < 10; ++i)
	{
		if (i > 4)
			continue;

		//i가 5가 되는 시점부터 이 코드는 수행되지 않는다!
		printf("%dth\n", i);
	}

	printf("END: i == %d\n", i);
	return 0;
}

