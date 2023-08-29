
#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

/**********************		Protoype Section Start	**********************/

signed long binary_search(signed long *arr, unsigned long  size, signed long target);
signed long recursive_binary_search(signed long *arr, unsigned long  size, signed long target);

/**********************		Protoype Section End	**********************/

/**********************		Macros Section Start	**********************/
#define TARGET_NOT_FOUND    -1
#define ZERO_INT             0
#define ONE                  1
#define TWO                  2
/**********************		Macros Section End	**********************/
#endif
