#include <stdio.h>
/*
초를 입력받아 몇시간 몇분 몇초인가 출력하는 코드
*/
int main(void)
{
//	FILE *fp = stdin;
	int nTimes = 0;
	int nMinutes = 0;
	int nSeconds = 0;
	int iSeconds = 0;
	int nTemp = 0;
	while (nSeconds >= 0) {
		printf("초를 입력하세요 : ");
		scanf_s("%d%*c", &nSeconds);
		if (nSeconds >= 0) {
	
			iSeconds = nSeconds;

			nMinutes = nSeconds / 60;
			nTemp = nSeconds % 60;
			nSeconds = nTemp;

			nTimes = nMinutes / 60;
			nTemp = nMinutes % 60;
			nMinutes = nTemp;

			printf("%d초는 %d시간 %d분 %d초 입니다.\n",
				iSeconds, nTimes, nMinutes, nSeconds);
		}
	}
	return 0;

}