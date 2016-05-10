#include <stdio.h>

int main(void)
{
	int aList[5] = { 10, 20, 30, 40, 50 };
	int aListNew[5] = { 0 };
	int i = 0;

	//배열 전체 요소를 동시에 대입하려 시도한다.
//	aListNew = aList;

	for (i = 0; i < 5; ++i)
		printf("%d\t", aListNew[i]);
	putchar('\n');

	return 0;
}

