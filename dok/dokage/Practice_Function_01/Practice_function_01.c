#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//int (*¿Ã∏ß) (char*)
int TestFunc(char *pszParm)
{
	return 0;
}

int MyCmp(const void *left, const void *right)
{
	return *(int*)left - *(int*)right;
//	return *(int*)right - *(int*)left;
}

int main(void)
{
	srand((unsigned)time(NULL));
	TestFunc("");
	int nData = (int)TestFunc;
	int aList[20] = { 0 };
	const int eAch_aList = sizeof(aList) / sizeof(int);
	
	for (int i = 0; i < eAch_aList; ++i)
		aList[i] = rand()%1000;

	qsort(aList, eAch_aList, sizeof(int), MyCmp);
	((int(*)(char*))nData)("");

	for ( int i = 0; i < eAch_aList ; ++i )
		printf("%d ", aList[i]);
	printf("\n");
	return 0;

}