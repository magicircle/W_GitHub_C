#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>

//
//입력받은 icount수 만큼의 값을 차례로 입력받아
//올림차순으로 정렬
//그러나 아직은 100개

void quicksort(int *quick_Sort, int low, int high, int *swap_Count);
int partition(int *quick_Sort, int low, int high, int *swap_Count);
void swap(int a[], int left, int right);
int goto_Cursor_xy(int x, int y);
void put_Cursor_xy(int x, int y, int xyvalue);

#define SORTNUMBER 280

int main(void) 
{
	const int icount = SORTNUMBER;
	int my_Sort[SORTNUMBER] = { 0 };
	int arr_Count[SORTNUMBER] = { 0 };
	const int output_Width = 4;
	const int offset_Y = 18;
	const int num_X = 20;
	int num_Y;
	num_Y = sizeof(my_Sort) / 4 / num_X;
	int swap_Count = 0;

	srand((unsigned)time(NULL));
	
	printf("배열배치  섞는중입니다 : \n");
	int iRandom = 0;
	for (int i = 1; i <= icount; i++)
	{
		my_Sort[i-1] = i;
		arr_Count[i-1] = i;
	}
	for( int i=icount ; i>0 ; i-- )
	{
		iRandom = rand() % i;
		my_Sort[i-1] = arr_Count[iRandom];
		for (int j = iRandom; j < (i - 1); j++)
			arr_Count[j] = arr_Count[j + 1];
	}
	
	
	for (int i = 0; i < icount; i++) 
	{
		printf("%4d", my_Sort[i]);
	}
	printf("\n\n");


	goto_Cursor_xy(0, offset_Y );
	printf("오름차순 정렬입니다 : \n");
	
	for (int i = 0; i < icount; i++) {
		printf("%4d", my_Sort[i]);
	}
		
	printf("\n");

	Sleep(3000);
	
	quicksort(my_Sort, 0, icount - 1, &swap_Count);
	
	goto_Cursor_xy(0, 34);
	
	return 0;
}


int goto_Cursor_xy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	return 0;
}

void put_Cursor_xy(int x, int y, int xyvalue)
{
	Sleep(5);

	goto_Cursor_xy(x, y);
	printf("%4d", xyvalue);
}

void swap(int *quick_Sort, int left, int right)
{
	int temp;
	int x, y;
	const int offset_Y = 19;
	const int output_Width = 4;
	const int num_X = 20 ;
	
	temp = quick_Sort[left];
	quick_Sort[left] = quick_Sort[right];
	quick_Sort[right] = temp;

	x = ( left % num_X ) * output_Width;
	y = offset_Y + (left / num_X);
	put_Cursor_xy(x, y, quick_Sort[left]);
	
	x = (right % num_X) * output_Width;
	y = offset_Y + (right / num_X);
	put_Cursor_xy(x, y, quick_Sort[right]);

}//end swap

void quicksort(int *quick_Sort, int low, int high, int *swap_Count)
{
	int pivot;
	// Termination condition! 
	if (high > low)
	{
		pivot = partition(quick_Sort, low, high, swap_Count);
		quicksort(quick_Sort, low, pivot - 1, swap_Count);
		quicksort(quick_Sort, pivot + 1, high, swap_Count);
	}

	goto_Cursor_xy(0, 26);
} //end quicksort

int partition(int *quick_Sort, int low, int high, int *swap_Count)
{
	int left, right;
	int pivot_item;
	int pivot;
	left = low;
	right = high;
	pivot = low;
	pivot_item = quick_Sort[low];

	const int offset_Y = 19;
	goto_Cursor_xy(23, offset_Y-1);
	printf("Pivot ( %4d )", pivot_item);
	
	while (left < right)
	{
		// Move left while item < pivot 
		while (quick_Sort[left] <= pivot_item)
			left++;
		// Move right while item > pivot 
		while (quick_Sort[right] > pivot_item)
			right--;
		if (left < right) 
		{
			swap(quick_Sort, left, right);
			*swap_Count = (*swap_Count) + 1;
			goto_Cursor_xy(40, offset_Y - 1);
			printf("swap_Count ( %4d )", *swap_Count);

		}
	}

	// right is final position for the pivot 
	quick_Sort[low] = quick_Sort[right];
	quick_Sort[right] = pivot_item;
	
	int x, y;

	x = (low % 20) * 4;
	y = offset_Y + (low / 20);
	put_Cursor_xy(x, y, quick_Sort[low]);

	x = (right % 20) * 4;
	y = offset_Y + (right / 20);
	put_Cursor_xy(x, y, quick_Sort[right]);

	return right;
}//end partition

