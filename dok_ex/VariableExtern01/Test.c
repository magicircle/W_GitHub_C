//Test.c file

#include <stdio.h>

//전역변수 선언 및 정의.
int g_nCounter = 0;

//함수 정의.
void InitCounter(int nData)
{
	g_nCounter = nData;
}

void IncreaseCounter()
{
	g_nCounter++;
}

