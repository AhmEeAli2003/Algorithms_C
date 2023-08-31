#include "bub_private.h"

void bubble_sort(signed long *arr, unsigned long size, unsigned char sort_type)
{

	switch(sort_type)
	{
		case 1:
			Ascending_bubble_sort(arr, size);
			break;
		case 2:
			Descending_bubble_sort(arr, size);
			break;
	}
	
	
}

void Ascending_bubble_sort(signed long *arr, unsigned long size)
{
	unsigned long iter = 0;
	signed long temp = 0;
	unsigned char sorted;
	
	do
	{
		sorted = TRUE;
		
		for(iter = 0; iter < size - 1; iter++)
		{
			if(arr[iter] > arr[iter + 1])
			{
				temp = arr[iter];
				arr[iter] = arr[iter + 1];
				arr[iter + 1] = temp;
				sorted = FALSE;
			}
		}
		
	}while(!sorted);
}

void Descending_bubble_sort(signed long *arr, unsigned long size)
{
	unsigned long iter = 0;
	signed long temp = 0;
	unsigned char sorted;
	
	do
	{
		sorted = TRUE;
		
		for(iter = 0; iter < size - 1; iter++)
		{
			if(arr[iter] < arr[iter + 1])
			{
				temp = arr[iter];
				arr[iter] = arr[iter + 1];
				arr[iter + 1] = temp;
				sorted = FALSE;
			}
		}
		
	}while(!sorted);
}