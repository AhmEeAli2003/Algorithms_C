#include <stdio.h>
#include "../Bubble/bubble_sort.h"
void print_array(signed long *arr, unsigned long size);

int main(void)
{
	signed long arr[] = {10, 20, 12, 45, 30};
	unsigned long size = sizeof(arr) / sizeof(arr[0]);

	printf("Array before sorting\n");
	print_array(arr, size);
	
	bubble_sort(arr, size, ASCENDING_SORT);
	printf("Array after ascending sorting\n");
	print_array(arr, size);
	
	bubble_sort(arr, size, DESCENDING_SORT);
	printf("Array after descending sorting\n");
	print_array(arr, size);
	
	return 0;
}

void print_array(signed long *arr, unsigned long size)
{
	unsigned long i;
	for(i = 0; i < size; i++)
	{
		printf("%ld\t", arr[i]);
	}
	printf("\n");

}
