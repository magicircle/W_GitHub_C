#include <stdio.h>

/*
	�Է¹��� icount�� ��ŭ�� ���� ���ʷ� �Է¹޾�
	�ִ밪�� ����ϴ� �ڵ�
*/

int main(void) {
	int inum[9] = { 0 };
	int maxnum = 0;
	int icount = 0;
	while (1) {
		printf("��� ���ڸ� ���Ͽ� �ִ밪�� ���� �ǰ���? : ");
		scanf_s("%d%*c", &icount);
		if (icount < 0 || icount > 10)
			printf("\n1�̻� 10������ ���� �Է��Ͽ� �ּ���.\n\n");
		if (icount >= 0 && icount <= 10) break;
	}
	for (int i = 0; i < icount; i++) {
		printf("%d��° ���ڸ� �Է��ϼ��� : ", i+1);
		scanf_s("%d%*c", &inum[i]);
		if ((inum[i] - maxnum) > 0) maxnum = inum[i];
	}
	
	printf("�Է°��� ���� ū ���� %d �Դϴ�. ", maxnum);

	return 0;
	
}