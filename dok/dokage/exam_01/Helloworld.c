#include <stdio.h>
/*
�ʸ� �Է¹޾� ��ð� ��� �����ΰ� ����ϴ� �ڵ�
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
		printf("�ʸ� �Է��ϼ��� : ");
		scanf_s("%d%*c", &nSeconds);
		if (nSeconds >= 0) {
	
			iSeconds = nSeconds;

			nMinutes = nSeconds / 60;
			nTemp = nSeconds % 60;
			nSeconds = nTemp;

			nTimes = nMinutes / 60;
			nTemp = nMinutes % 60;
			nMinutes = nTemp;

			printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.\n",
				iSeconds, nTimes, nMinutes, nSeconds);
		}
	}
	return 0;

}