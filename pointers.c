//Brent Williams
//CSC-341
//Sample Pointer Program

#include <stdio.h>
#include <stdlib.h>

//int x is within the unitialized data
int x;

//int y - 15 is within the initialized data
int y = 15;

//int argc and argv are within the highest part of memory
int main(int argc, char * argv[])
{
	//int *values and i are within the stack
	int *values;
	int i;

	//the output of values is within the heap
	values = (int *)malloc(sizeof(int)*5);

	for (i = 0; i < 5; i++)
	{
		values[i] = i;
	}


	printf("The address of argc is: %p\n", &argc);
	printf("The address of argv is: %p\n", &argv);
	printf("The address of the stack is: %p\n", &*values);
	printf("The address of the stack is: %p\n", &i);
	printf("The address of the heap is: %p\n", &values);
	printf("The address of the unitialized data is: %p\n", &x);
	printf("The address of the initialized data is: %p\n", &y);	

	return EXIT_SUCCESS;

}





