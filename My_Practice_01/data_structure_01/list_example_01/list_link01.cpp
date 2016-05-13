#include <stdio.h>

typedef struct _USERDATA
{
	char szNAME[16];
	char szPhone[16];
	struct _USERDATA *pNext;

} USERDATA;

void main(void)
{
	USERDATA UserList[3] =
	{
		{ "À¯Àç¼®", "1111", NULL },
		{ "¹Ú¸í¼ö", "2222", NULL },
		{ "³ëÈ«Ã¶", "3333", NULL },
	};
	USERDATA *pTmp = NULL;

	UserList[0].pNext = &UserList[1];
	UserList[1].pNext = &UserList[2];
	UserList[2].pNext = NULL;

	pTmp = &UserList[0];
		while (pTmp != NULL)
		{
			printf("%s, %s\n", pTmp->szNAME, pTmp->szPhone);
			pTmp = pTmp->pNext;
		}

}