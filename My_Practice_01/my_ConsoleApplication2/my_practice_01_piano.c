#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>


void playSound(void);

int main(void)
{
	float a = 1.1f;
	double b = 1.1;
	printf("%d %d \n", sizeof(a), sizeof(b));
	printf("%d %d \n", sizeof(&a), sizeof(&b));
	printf("%d %d \n", sizeof(char*), sizeof(int*));
	printf("%d %d \n", sizeof(float*), sizeof(double*));

	if (true!=0) printf("true!=0\n");
	if (true==0) printf("true=0\n");
	printf("\n");

	return;
}

void playSound(void)
{
	char ch = getch();
	const int soundDelay = 300;
	switch (ch)
	{
	case 'a':
		Beep(262, soundDelay);
		break;
	case 's':
		Beep(294, soundDelay);
		break;
	case 'd':
		Beep(330, soundDelay);
		break;
	case 'f':
		Beep(349, soundDelay);
		break;
	case 'g':
		Beep(392, soundDelay);
		break;
	case 'h':
		Beep(440, soundDelay);
		break;
	case 'j':
		Beep(494, soundDelay);
		break;
	case 'k':
		Beep(523, soundDelay);
	}

	return;

}
