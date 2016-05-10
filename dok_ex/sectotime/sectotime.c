#include<stdio.h>

int main(void)
{
	int nSec = 0;
	scanf("%d", &nSec);
	printf("%d초는 %02d시간 %02d분 %02d초 입니다.\n",
		nSec,
		nSec / 3600,
		nSec % 3600 / 60,
		nSec % 60);
	return 0;
}


