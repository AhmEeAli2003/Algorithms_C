#include <stdio.h>
//#include "../Linear/linear_search.h"
#include "../Binary/binary_search.h"

int main(void)
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int len = sizeof(arr) / sizeof(arr[0]);
	
	signed long position = recursive_binary_search((signed long *) arr, (unsigned long)len, 4);
	printf("%ld", position);
	
	return 0;
}