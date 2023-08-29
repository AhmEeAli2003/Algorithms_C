#include "binary_search.h"

/**
 *	@name : binary_search
 *  @breif: Binary Search Algorithm
 *  @param: signed long *arr    ->  pointer to array
 * 			unsigned long  size ->  Size of array
 *			signed long target  ->  Target of search
 *  @return: signed long -> return index of target if found, else return -1.
 */
signed long binary_search(signed long *arr, unsigned long  size, signed long target) 
{
	unsigned long first = ZERO_INT;
	unsigned long last  = size - ONE;
	unsigned long midpoint = ZERO_INT;
	
	do
	{
		
		midpoint = (first + last) / TWO;
		
		if(target == (*(arr + midpoint)))
		{
			return midpoint;
		}
		else if(target > (*(arr + midpoint)))
		{
			first = midpoint + ONE;
		}
		else
		{
			last = midpoint - ONE;
		}
		
	}while(first <= last);
	
	return TARGET_NOT_FOUND;
}

/**
 *	@name : recursive_binary_search
 *  @breif: Binary Search Algorithm Implementation using recursion.
 *  @param: signed long *arr    ->  pointer to array
 * 			unsigned long  size ->  Size of array
 *			signed long target  ->  Target of search
 *  @return: signed long -> return any positive number if found, else return -1.
 */
 
signed long recursive_binary_search(signed long *arr, unsigned long  size, signed long target)
{
	unsigned long midpoint = ZERO_INT;
	
	if(ZERO_INT == size)
	{
		return TARGET_NOT_FOUND;
	}
	else
	{
		midpoint = size / TWO;
		
		if(target == (*(arr + midpoint)))
		{
			return midpoint;
		}
		else
		{
			if(target > (*(arr + midpoint)))
			{
				return recursive_binary_search((arr + (midpoint + ONE)), midpoint, target);
			}
			else
			{
				return recursive_binary_search(arr, midpoint, target);
			}
		}
			
		
	}
		
}