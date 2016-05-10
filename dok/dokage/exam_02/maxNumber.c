#include <stdio.h>

/*
	입력받은 icount수 만큼의 값을 차례로 입력받아
	최대값을 출력하는 코드
*/

int main(void) {
	int inum[9] = { 0 };
	int maxnum = 0;
	int icount = 0;
	while (1) {
		printf("몇개의 숫자를 비교하여 최대값을 구할 건가요? : ");
		scanf_s("%d%*c", &icount);
		if (icount < 0 || icount > 10)
			printf("\n1이상 10이하의 값만 입력하여 주세요.\n\n");
		if (icount >= 0 && icount <= 10) break;
	}
	for (int i = 0; i < icount; i++) {
		printf("%d번째 숫자를 입력하세요 : ", i+1);
		scanf_s("%d%*c", &inum[i]);
		if ((inum[i] - maxnum) > 0) maxnum = inum[i];
	}
	
	printf("입력값중 가장 큰 수는 %d 입니다. ", maxnum);

	return 0;
	
}