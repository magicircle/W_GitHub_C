#include <stdio.h>

void main()
{
	FILE *fp = NULL;
	char ch;

	//���� ��ο� Test.txt ������ �����ϰ� ���ڿ��� ����.
	fp = fopen("Test.txt", "w");
	fputs("Test string!", fp);
	fclose(fp);

	//������ �ٽ� �����Ѵ�.
	fp = fopen("Test.txt", "r");
	if (fp == NULL)
		return;

	//���Ͽ��� �� ���ھ� �о�� �ٽ� �� ���ھ� ����Ѵ�.
	while ((ch = fgetc(fp)) != EOF)
		putchar(ch);

	fclose(fp);
}



