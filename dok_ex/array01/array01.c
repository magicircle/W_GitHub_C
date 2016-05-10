#include <stdio.h>

int main(void)
{
	//int 5개가 한 덩어리인 배열 선언 및 0 초기화.
	int aList[5] = { 0 };
	int i = 0;

	//다섯 번 반복해 사용자 입력을 받고 순차적으로 인덱스를
	//증가시켜 각각의 배열요소에 저장한다.
	for (i = 0; i < 5; ++i)
		scanf("%d", &aList[i]);

	//배열에 담긴 내용을 요소 하나씩 꺼내서 출력한다.
	for (i = 0; i < 5; ++i)
		printf("%d\n", aList[i]);

	return 0;
}

