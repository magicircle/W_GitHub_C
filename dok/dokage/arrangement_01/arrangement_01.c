#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//
//�Է¹��� icount�� ��ŭ�� ���� ���ʷ� �Է¹޾�
//�ø��������� ����
//�׷��� ������ 100��

//  ��������
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
//		printf("��� ���ڸ� ���Ͽ� �����ϰڽ��ϱ�? : ");
//		scanf_s("%d%*c", &icount);
//		if (icount < 0 || icount > 100)
//			printf("\n1�̻� 100������ ���� �Է��Ͽ� �ּ���.\n\n");
//		if (icount >= 0 && icount <= 100) break;
//	}
//
	for (int i = 0; i < icount; i++) {
		inum[i] = rand()%1000;
	}

	printf("\n");

	printf("�������� �����Դϴ� : ");
	ascending(icount, inum);

	for (int i = 0; i < icount; i++)
		printf("%d ", inum[i]);
	printf("\n\n");

	
	return 0;

}