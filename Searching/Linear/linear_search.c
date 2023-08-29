#include "linear_search.h"

/**
 *	@name : linear_search
 *  @breif: Linear Search Algorithm
 *  @param: signed long *arr    ->  pointer to array
 * 			unsigned long  size ->  Size of array
 *			signed long target  ->  Target of search
 *  @return: signed long -> return index of target if found, else return -1.
 */
 
signed long linear_search(signed long *arr, unsigned long  size, signed long target)
{
	unsigned long iterator = ZERO_INT;
	
	for(iterator = ZERO_INT; iterator < size; iterator++)
	{
		if(target == (*(arr + iterator)))
		{
			return iterator;
		}
		
	}
	
	return TARGET_NOT_FOUND;
}