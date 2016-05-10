#include <stdio.h>

int main(void)
{
	char szName[32] = { 0 };
	int nAge = 0;

	//사용자로부터 나이를 입력 받는다.
	//이 때, 입력의 완료를 의미하는 Enter키(\n)입력이 버퍼에 남는다.
	printf("나이를 입력하세요. : ");
	scanf_s("%d", &nAge);

	printf("이름을 입력하세요. : ");
	//버퍼 안에 남아있는 것들을 모두 비운 후 이름을 입력 받는다.
	//따라서 개행문자(\n)가 제거된다.
	fflush(stdin);
	gets_s(szName, sizeof(szName));

	printf("%d, %s\n", nAge, szName);
	return 0;
}


