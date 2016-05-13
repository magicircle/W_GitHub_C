#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//
//�Է¹��� icount�� ��ŭ�� ���� ���ʷ� �Է¹޾�
//�ø��������� ����
//�׷��� ������ 100��

void quicksort(int a[], int low, int high, int *swap_Count);
int partition(int a[], int low, int high, int *swap_Count);
void swap(int a[], int left, int right);

# define SORTNUMBER 10000

int main(void) {
	const int icount = SORTNUMBER;
	int inum[SORTNUMBER] = { 0 };
	int iarrange = 1;
	srand((unsigned)time(NULL));
	int swap_Count = 0;


	for (int i = 0; i < icount; i++) {
		inum[i] = rand();
	}

	printf("\n");

	printf("�������� �����Դϴ� : ");
	quicksort(inum, 0, icount-1, &swap_Count);

	for (int i = 0; i < icount; i++)
		printf("%d ", inum[i]);

	printf("\n\n");

	printf(" ������ �迭�� %d : ", SORTNUMBER);
	printf(" SWAP �ݺ�Ƚ�� %d : ", swap_Count);

	return 0;
}



void swap(int a[], int left, int right)
{
	int sort_IFcount=0;
	int temp;
	temp = a[left];
	a[left] = a[right];
	a[right] = temp;
	
}//end swap

void quicksort(int a[], int low, int high, int *swap_Count)
{
	int pivot;
	int sort_IFcount=0;
	// Termination condition! 
	if (high > low)
	{
		pivot = partition(a, low, high, swap_Count);
		quicksort(a, low, pivot - 1, swap_Count);
		quicksort(a, pivot + 1, high, swap_Count);
	}
} //end quicksort

int partition(int a[], int low, int high, int *swap_Count)
{
	int left, right;
	int pivot_item;
	int pivot = left = low;
	pivot_item = a[low];
	right = high;
	while (left < right)
	{
		// Move left while item < pivot 
		while (a[left] <= pivot_item)
			left++;
		// Move right while item > pivot 
		while (a[right] > pivot_item)
			right--;
		if (left < right) {
			swap(a, left, right);
			*swap_Count = (*swap_Count) + 1;
		}

	}
	// right is final position for the pivot 
	a[low] = a[right];
	a[right] = pivot_item;
	return right;
}//end partition

