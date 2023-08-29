#include <stdio.h>
#include "../Selection/selection_sort.h"
void print_array(int *arr, int size);

int main(void)
{
	int arr[] = {10,20,12,45,30,22,150,90}, i;
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Array before sorting\n");
	print_array(arr, size);
	
	selection_sort((signed long *)arr, (unsigned long) size, ASCENDING_SORT);
	
	printf("Array after ascending sorting\n");
	print_array(arr, size);
	
	selection_sort((signed long *)arr, (unsigned long) size, DESCENDING_SORT);
	
	printf("Array after descending sorting\n");
	print_array(arr, size);
	
	return 0;
}

void print_array(int *arr, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	
}