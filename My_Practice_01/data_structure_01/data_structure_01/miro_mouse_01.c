#include <stdio.h>
#include <time.h>
#include <Windows.h>

typedef struct _USERDATA
{
	char mPath[4];
	struct _USERDATA *pNext;

} USERDATA;

void file_Read_mirotxt(char *fName, char (*ch_Array)[80]);
int goto_Cursor_xy(int x, int y);
void put_Cursor_xy(int x, int y, char xyvalue);
void direction_Decison(char (*t_Array)[80], int *index_X, int *index_Y, int *x_Direction, int *y_Direction);
void backPath_Search_Side(char (*t_Array)[80], int *index_X, int *index_Y, int *x_Direction, int *y_Direction);

void main()
{
	char mouse_Array[24][80];
	const char iRobot = 'O';
	const char pTrace = '.';
	const char pNot = '@';
	const char pWall = 'X';
	char find_Path;
	int index_X = 1;
	int index_Y = 1;
	int x_Direction = 1;
	int y_Direction = 0;
	int temp;

	file_Read_mirotxt("miro_03.txt", mouse_Array);
	printf("\n\n");

	while ( mouse_Array[index_Y][index_X] != 'E' )
	{
		// 전진할 방향 적절한지 탐색		
		find_Path = mouse_Array[index_Y + y_Direction][index_X + x_Direction];
 
		while ( (find_Path != pWall) && (find_Path != pNot) )
		{
			if (find_Path == pTrace)
			{
				put_Cursor_xy(index_X, index_Y, pNot);
				mouse_Array[index_Y][index_X] = pNot;

				index_X = index_X + x_Direction;
				index_Y = index_Y + y_Direction;

				put_Cursor_xy(index_X, index_Y, iRobot);

				backPath_Search_Side(mouse_Array, &index_X, &index_Y, &x_Direction, &y_Direction);
			}
				

			else 
			{
				put_Cursor_xy(index_X, index_Y, pTrace);
				mouse_Array[index_Y][index_X] = pTrace;

				index_X = index_X + x_Direction;
				index_Y = index_Y + y_Direction;

				put_Cursor_xy(index_X, index_Y, iRobot);
			}

			find_Path = mouse_Array[index_Y + y_Direction][index_X + x_Direction];

		}

		direction_Decison(mouse_Array, &index_X, &index_Y, &x_Direction, &y_Direction);

	}
}

// 되돌아가는 길에 새길이 있으면 탐색
void backPath_Search_Side( char (*t_Array)[80], int *index_X, int *index_Y, int *x_Direction, int *y_Direction)
{
	if (*x_Direction == 0)
	{
		if ((t_Array[*index_Y][*index_X - 1] == ' '))
		{
			*x_Direction = -1;
			*y_Direction = 0;
			return;
		}
		if ((t_Array[*index_Y][*index_X + 1] == ' '))
		{
			*x_Direction = 1;
			*y_Direction = 0;
			return;
		}
	}

	if (*y_Direction == 0)
	{
		if ((t_Array[*index_Y-1][*index_X] == ' '))
		{
			*y_Direction = -1;
			*x_Direction = 0;
			return;
		}
		if ((t_Array[*index_Y+1][*index_X] == ' '))
		{
			*y_Direction = 1;
			*x_Direction = 0;
			return;
		}
	}
}



// 벽을 만났을 때 로봇쥐 방향 탐색
void direction_Decison( char (*t_Array)[80], int *index_X, int *index_Y, int *x_Direction, int *y_Direction )
{
	char find_Path;
	int temp;

	if (*x_Direction == 0)
	{	
		temp = *y_Direction;
		*y_Direction = 0;
		*x_Direction = 1;
		find_Path = t_Array[*index_Y][*index_X + *x_Direction];
		if (find_Path != 'X' && find_Path != '@') return;
		

		*x_Direction = -1;
		find_Path = t_Array[*index_Y][*index_X + *x_Direction];
		if (find_Path != 'X' && find_Path != '@') return;

		*y_Direction = -temp;
		*x_Direction = 0;
		return;
	}

	if (*y_Direction == 0)
	{
		temp = *x_Direction;
		*x_Direction = 0;

		*y_Direction = 1;
		find_Path = t_Array[*index_Y + *y_Direction][*index_X];
		if (find_Path != 'X' && find_Path != '@') return;

		*y_Direction = -1;
		find_Path = t_Array[*index_Y + *y_Direction][*index_X];
		if (find_Path != 'X' && find_Path != '@') return;

		*x_Direction = -temp;
		*y_Direction = 0;
		return;
	}
}


// 미로 텍스트 문자열 읽고 화면에 출력
void file_Read_mirotxt(char *fName, char (*ch_Array)[80])
{
	char ch;
	int index_X = 0;
	int index_Y = 0;
	FILE *fp = NULL;

	fp = fopen(fName, "r");
	if (fp == NULL)
		puts("ERROR : Failed to open file");

	while ( ((ch = fgetc(fp)) != EOF) )
	{
		if (ch == '\n' || ch == '\0') continue;
		if ((index_X >= 80) && (index_Y >= 23)) break;
		if ((index_X >= 80))
		{
			index_X = 0;
			index_Y++;
			putchar('\n');
		}
		putchar(ch);
		ch_Array[index_Y][index_X] = ch;
		index_X++;

	}

	fclose(fp);
}


int goto_Cursor_xy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	return 0;
}

void put_Cursor_xy(int x, int y, char xyvalue)
{
	Sleep(10);

	goto_Cursor_xy(x, y);
	putchar(xyvalue);
}
