#include <stdio.h>

void SpiralArray(int xLimit, int yLimit, int (*pSpiral)[8])
{
	int lastcount = xLimit * yLimit;
	int iNdexnum = 1;
	int xLeft = 0;
	int xRight = xLimit;
	int yUpper = 0;
	int yLower = yLimit;
	int ix = 0;
	int jy = 0;
	int dirX = 1;
	int dirY = 1;

	xRight--;
	yLower--;

	while (iNdexnum <= lastcount) {
		for (ix = (dirX == 1) ? xLeft : xRight; (xLeft <= ix) && (ix <= xRight); ix = ix + dirX) {
			pSpiral[jy][ix] = iNdexnum;
			iNdexnum++;
		}
		(dirX == 1) ? yUpper++ : yLower--;
		dirX = -dirX;
		ix = ix + dirX;


		for (jy = (dirY == 1) ? yUpper : yLower; (yUpper <= jy) && (jy <= yLower); jy = jy + dirY) {
			pSpiral[jy][ix] = iNdexnum;
			iNdexnum++;
		}
		(dirY == 1) ? xRight-- : xLeft++;
		dirY = -dirY;
		jy = jy + dirY;
	}
}


int main(void) {

	int aSpiral[8][8] = { 0 };
	int iXLimit = sizeof(aSpiral[0]) / 4;
	int jYLimit = sizeof(aSpiral) / iXLimit / 4;
	SpiralArray(iXLimit, jYLimit, aSpiral);
	
	for (int jy = 0; jy < jYLimit; jy++) {
		for (int ix = 0; ix < iXLimit; ix++) {
			printf("%4d", aSpiral[jy][ix]);
		}
		printf("\n\n");
	}

	return 0;

}