#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//
//�Է¹��� icount�� ��ŭ�� ���� ���ʷ� �Է¹޾�
//�ø��������� ����
//�׷��� ������ 100��

//  ��������

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
//		printf("��� ���ڸ� ���Ͽ� �����ϰڽ��ϱ�? : ");
//		scanf_s("%d%*c", &icount);
//		if (icount < 0 || icount > 100)
//			printf("\n1�̻� 100������ ���� �Է��Ͽ� �ּ���.\n\n");
//		if (icount >= 0 && icount <= 100) break;
//	}
//
	for (int i = 0; i < icount; i++) {
		inum[i] = rand() % SORTNUMBER;
	}

	printf("\n");

	printf("�������� �����Դϴ� : ");
	
	swap_Count = bubbleSort(0, icount, inum);

	for (int i = 0; i < icount; i++)
		printf("%d ", inum[i]);
	printf("\n\n");
	printf(" SWAP �ݺ�Ƚ�� %d : ", swap_Count);
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

