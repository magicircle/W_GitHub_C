#include <stdio.h>

//_MSGTEST_ ��� ���ǰ� �ƴ°� �׷��� �������� ����
//MYMESSAGE ��� ���Ǵ� �޶�����!
#ifdef _MSGTEST_
#define MYMESSAGE		"I am a boy."
#else
#define MYMESSAGE		"You are a girl."
#endif

int main(void)
{
	//_MSGTEST_ ����� ���� �� ���� �׷��� ���� ���
	//����ϴ� ���ڿ��� �޶�����.
	puts(MYMESSAGE);
	return 0;
}


