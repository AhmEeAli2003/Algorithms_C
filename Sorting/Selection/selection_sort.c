#include "private.h"

void selection_sort(signed long *arr, unsigned long size, unsigned char sort_type)
{

	switch(sort_type)
	{
		case 1:
			Ascending_selection_sort(arr, size);
			break;
		case 2:
			Descending_selection_sort(arr, size);
			break;
	}
	
	
}

void Ascending_selection_sort(signed long *arr, unsigned long size)
{
	unsigned long first_iter = 0, second_iter = 0;
	signed long temp = 0;

	for(first_iter = 0; first_iter < size - 1; first_iter++)
	{
		for(second_iter = first_iter + 1; second_iter < size; second_iter++)
		{
			if(arr[first_iter] > arr[second_iter])
			{
				temp = arr[first_iter];
				arr[first_iter] = arr[second_iter];
				arr[second_iter] = temp;
			}
		}
		
	}
}

void Descending_selection_sort(signed long *arr, unsigned long size)
{
	unsigned long first_iter = 0, second_iter = 0;
	signed long temp = 0;
	
	for(first_iter = 0; first_iter < size - 1; first_iter++)
	{
		for(second_iter = first_iter + 1; second_iter < size; second_iter++)
		{
			if(arr[first_iter] < arr[second_iter])
			{
				temp = arr[first_iter];
				arr[first_iter] = arr[second_iter];
				arr[second_iter] = temp;
			}
		}
		
	}
}