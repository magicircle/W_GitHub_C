#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp = NULL;
	//���� ��ο� Test.txt ������ �����Ѵ�.
	fp = fopen("Test.txt", "w");

	//������ ���Ͽ� ���ڿ��� ����.(Ȥ�� ����Ѵ�.)
	fprintf(fp, "%s\n", "Test string");
	fprintf(fp, "%s\n", "Hello world!");

	//������ �ݰ� �޸������� Ȯ���Ѵ�.
	fclose(fp);
	system("notepad.exe test.txt");
}


