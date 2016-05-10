#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PrintUser(char(*pUser)[12]) 
{
	for (int i = 0; i < 3; ++i)
		puts(pUser[i]);

}

int main(void)
{
	char aListUser[3][12] = {
		"Ã¶¼ö",
		"±æµ¿",
		"¿µÈñ"
	};

	PrintUser(aListUser);

	return 0;
}