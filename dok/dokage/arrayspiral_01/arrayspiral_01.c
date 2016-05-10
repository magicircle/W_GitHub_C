#include <stdio.h>

int main(void) {

	int aSpiral[10][10] = { 0 };
	int ixy = 10;
	int lastcount = ixy * ixy;
	int iNdexnum = 1;
	int xLeft = 0;
	int xRight = ixy;
	int yUpper = 0;
	int yLower = ixy;
	int ix = 0;
	int jy = 0;
	
	xRight--;
	yLower--;

	while (iNdexnum <= lastcount) {

		for (int i = xLeft; i <= xRight; i++) {
			ix = i;
			aSpiral[yUpper][ix] = iNdexnum;
			iNdexnum++;
		}
		yUpper++;

		for (int j = yUpper; j <= yLower; j++) {
			jy = j;
			aSpiral[jy][xRight] = iNdexnum;
			iNdexnum++;
		}
		xRight--;

		for (int i = xRight; i >= xLeft; i--) {
			ix = i;
			aSpiral[yLower][ix] = iNdexnum;
			iNdexnum++;
		}
		yLower--;

		for (int j = yLower; j >= yUpper; j--) {
			jy = j;
			aSpiral[jy][xLeft] = iNdexnum;
			iNdexnum++;
		}
		xLeft++;
	}

	for ( jy = 0 ; jy < ixy; jy++ ) {
		for (ix = 0; ix < ixy; ix++) {
			printf("%4d", aSpiral[jy][ix]);
		}
		printf("\n\n");
	}

	return 0;

}