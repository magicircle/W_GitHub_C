#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int nData = 10;
	char *pszBuffer = NULL;

	pszBuffer = (char*)malloc(12);
	strcpy(pszBuffer, "Hello");
	free(pszBuffer);
	return 0;
}

