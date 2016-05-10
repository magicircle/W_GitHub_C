#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//
//입력받은 icount수 만큼의 값을 차례로 입력받아
//올림차순으로 정렬
//그러나 아직은 100개

//  버블정렬
void ascending(int icount, int *iAsnd) {
	int exTemp = 0;
	for (int i = 1; i < icount; i++) {
		for (int j = 0; j < (icount-i); j++) {
			if (iAsnd[j] > iAsnd[j + 1]) {
				exTemp = iAsnd[j];
				iAsnd[j] = iAsnd[j + 1];
				iAsnd[j + 1] = exTemp;
			}
		}
	}
	
	return;
}

//
/*
void ascending(int icount, int iAsnd[]) {
	int exTemp = 0;
	for (int i = 1; i < icount; i++) {
		for (int j = i ; j > 0 ; j--) {
			if (iAsnd[j] < iAsnd[j - 1]) {
				exTemp = iAsnd[j];
				iAsnd[j] = iAsnd[j - 1];
				iAsnd[j - 1] = exTemp;
				
			}
		}
	}
	for (int i = 0; i < icount; i++)
		printf("%d ", iAsnd[i]);
	printf("\n\n");

	return;
}
*/

int main(void) {
	int maxnum = 0;
	int icount = 20;
	int inum[20] = { 0 };
	int iarrange = 1;
	srand((unsigned)time(NULL));

//
//	while (1) {
//		printf("몇개의 숫자를 비교하여 정렬하겠습니까? : ");
//		scanf_s("%d%*c", &icount);
//		if (icount < 0 || icount > 100)
//			printf("\n1이상 100이하의 값만 입력하여 주세요.\n\n");
//		if (icount >= 0 && icount <= 100) break;
//	}
//
	for (int i = 0; i < icount; i++) {
		inum[i] = rand()%1000;
	}

	printf("\n");

	printf("오름차순 정렬입니다 : ");
	ascending(icount, inum);

	for (int i = 0; i < icount; i++)
		printf("%d ", inum[i]);
	printf("\n\n");

	
	return 0;

}