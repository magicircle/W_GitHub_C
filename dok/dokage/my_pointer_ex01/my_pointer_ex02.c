/*
#include <stdio.h>


int main(void) {

	char szSrcBuf[12] = { "Hello" };
	char szDstBuf[12] = { 0 };
	
	char* pszData = malloc( sizeof(char) * 12 );
	
	//Deep copy  내용을 복사
	memcpy(szDstBuf, szSrcBuf, sizeof(szDstBuf));

	//shallow copy 주소만 복사
	memcpy(pszData, szSrcBuf, sizeof(char)*12);

	puts(pszData);
	free(pszData);

//	if(szSrcBuf==szDstBuf)
	if (memcmp(szSrcBuf, szDstBuf, sizeof(szSrcBuf)) == 0)
		puts("Same");
	else
		puts("Diff");

	return 0;
}

*/