#include <stdio.h>

//������ ��� ACTION ���� �� ����.
//MOVE�� 0(int), JUMP�� 1, ATTACK�� 2.
enum ACTION { MOVE, JUMP, ATTACK };

//���缱���� �����ϴ� ������ ��� ���� �� ����.
//RED�� 100, GREEN�� 101, BLUE�� 102.
typedef enum COLOR { RED = 100, GREEN, BLUE } COLOR;

int main(void)
{
	enum ACTION act = MOVE;
	COLOR color = GREEN;

	//������ ����� int���� ����̴�.
	printf("ACTION: %d, COLOR: %d\n", act, color);
	return 0;
}

void DoAction(enum ACTION act)
{
	switch (act)
	{
	case MOVE:
		//TODO
		break;

	default:
		break;
	}
}

