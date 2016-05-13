#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//
//입력받은 icount수 만큼의 값을 차례로 입력받아
//올림차순으로 정렬
//그러나 아직은 100개

//  버블정렬

# define SORTNUMBER 1000

int bubbleSort(int sFlag, int icount, int *iAsnd);

int main(void) {
	int maxnum = 0;
	const int icount = SORTNUMBER;
	int inum[SORTNUMBER] = { 0 };
	int iarrange = 1;
	srand((unsigned)time(NULL));
	int swap_Count;

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
		inum[i] = rand() % SORTNUMBER;
	}

	printf("\n");

	printf("오름차순 정렬입니다 : ");
	
	swap_Count = bubbleSort(0, icount, inum);

	for (int i = 0; i < icount; i++)
		printf("%d ", inum[i]);
	printf("\n\n");
	printf(" SWAP 반복횟수 %d : ", swap_Count);
	return 0;
}

int bubbleSort(int sFlag, int icount, int *iAsnd) {
	int exTemp = 0;
	int sort_IFcount = 0;
	for (int i = 1; i < icount; i++) {
		for (int j = 0; j < (icount - i); j++) {
			if ((iAsnd[j] > iAsnd[j + 1])==sFlag) {
				exTemp = iAsnd[j];
				iAsnd[j] = iAsnd[j + 1];
				iAsnd[j + 1] = exTemp;
				sort_IFcount++;
			}
		}
	}

	return sort_IFcount;
}

