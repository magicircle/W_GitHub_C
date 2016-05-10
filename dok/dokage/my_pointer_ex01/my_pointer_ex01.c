/*
#include <stdio.h>


int main(void) {

	int aList[5] = { 40,20,50,30,10 };
	int *paList = aList;
	int nData = 300;
	int *pnData = &nData;
	printf("%p  %d  %d \n", &nData, *pnData, nData);

//	*((int*)0x0018FF28) = 600;	// 직접지정
	*pnData = 600;				// 간접지정
	
	printf("%p  %d  %d \n", &nData, *pnData, nData);

	printf("%p\n", aList);
	printf("%p\n", aList+1);
	printf("%p\n", &aList[1]);

	return 0;
}

*/