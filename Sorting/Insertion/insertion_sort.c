#include "ins_private.h"
#include <stdio.h>
/*
	1- Take 1 element [in index i = 1 in initializaion].
	2- compare this element with previous element [in index j = i - 1].
	3- if j > 0 && previous element > current element in asending, then: 
			A- store previous element in its index + 1 (shift its place with 1)
	 		B- dicrease index of previous element [j].
	 		C- go to step 3.
	4- store in index j + 1 current element.
	5- increment i.
	6- if i < size, then: go to step 1.
	
	EX:
	-> 11  12  13  5  6
	-> compare 11 [index j = 0] and 12 [index i = 1]
	-> 11 not greater than 12
	-> store 12 in index 1
	-> i = 2
	-> compare 12 [index j = 1] and 13 [index i = 2]
	-> 11 not greater than 12
	-> store 13 in index 2
	-> i = 3
	-> compare 13 [index j = 2] and 5 [index i = 3]
	-> 13 greater than 5
		-> store 13 in index 3 [11 , 12 , 13, 13, 6]
		-> j = 1
		-> compare 12 [index j = 1] and 5 [index i = 3]
		-> 12 greater than 5
			-> store 12 in index 2 [11 , 12 , 12, 13, 6]
			-> j = 0
			-> compare 11 [index j = 0] and 5 [index i = 3]
			-> 11 greater than 5
				-> store 11 in index 1 [11 , 11 , 12, 13, 6]
				-> j = -1
				-> exit
	-> store 5 in index 0 [5, 11, 12, 13, 6]
	-> i = 4
	-> compare 13 [index j = 3] and 6 [index i = 4]
	-> 13 greater than 5
		-> store 13 in index 4 [5, 11, 12, 13, 13]
		-> j = 2
		-> compare 12 [index j = 1] and 6 [index i = 4]
		-> 12 greater than 6
			-> store 12 in index 3 [5, 11, 12, 12, 13]
			-> j = 1
			-> compare 11 [index j = 1] and 6 [index i = 4]
			-> 11 greater than 6
				-> store 11 in index 2 [5, 11, 11, 12, 13]
				-> j = 0
				-> compare 5 [index j = 0] and 6 [index i = 4]
				-> 5 not greater than 6
				-> exit
	-> store 1 [index "j + 1"] 6 "current element" [5, 6, 11, 12, 13]
*/

void insertion_sort(signed long *arr, unsigned long size, unsigned char sort_type)
{
	switch(sort_type)
	{
		case ASCENDING_SORT:
			Ascending_insertion_sort(arr, size);
			break;
		case DESCENDING_SORT:
			Descending_insertion_sort(arr, size);
			break;
	}
}

void Ascending_insertion_sort(signed long *arr, unsigned long size)
{
	int first_iter = 0, second_iter = 0; //Unsigned long make runtime error :( 
	signed long key = 0;
	
	for(first_iter = 1; first_iter < size ; first_iter++)
	{
		key = arr[first_iter];

		second_iter = first_iter - 1;
		
		while(second_iter >= 0 && arr[second_iter] > key)
		{
			arr[second_iter + 1] = arr[second_iter];	
			second_iter--;
		}
		arr[second_iter + 1] = key;
	}
}

void Descending_insertion_sort(signed long *arr, unsigned long size)
{
	int first_iter = 0, second_iter = 0;
	signed long key = 0;
	
	for(first_iter = 1; first_iter < size; first_iter++)
	{
		key = arr[first_iter];

		second_iter = first_iter - 1;
		
		while(second_iter >= 0 && arr[second_iter] < key)
		{
			arr[second_iter + 1] = arr[second_iter];
			second_iter--;
		}
		arr[second_iter + 1] = key;
	}
	
}