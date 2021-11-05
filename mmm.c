#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	This code was modified from geeks for geeks, simplified, then broken so there was memory leak.
	Simplified because i'm not a professional programmer, so i don't have to worry
	about whether or not we have enough memory to successfully allocate 40 (10 * (size of int)) bytes,
	i didn't like their extra if statements, and I added a new line at the end because it looked bad
	on the output to terminal
	link is here: 
	https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/
	*/
	
	// pointer is base register of block
	int* ptr;
	int n, i;
	
	//allocate
	n = 10;
	ptr = (int*)malloc(n * sizeof(int));
	
	//fill array
	for (i = 0; i < n; ++i){
		ptr[i] = i + 1;
	}
	
	//check array
	printf("elements in array: ");
	for (i = 0; i < n; ++i){
		printf("%d, ", ptr[i]);
	}
	printf("\n");
	
	//now we free
	free(ptr); //comment out to run other test case
	
	return 0;
}
