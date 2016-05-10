#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void TestFunc1(int nParam){
	printf("TestFunc1\n");
}
void TestFunc2(int nParam){
	printf("TestFunc2\n");
}
void TestFunc3(int nParam){
	printf("TestFunc3\n");
}

int main(void)
{
	void(*pfList[3])(int) = {
		TestFunc1,TestFunc2,TestFunc3
	};
	int nInput;
	scanf_s("%d", &nInput);
	pfList[nInput](10);
	
	return 0;
}