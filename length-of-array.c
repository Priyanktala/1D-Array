#include<stdio.h>
main()

/*
length of 1D array.
*/
{
	int array[]={1,6,7,5,9,3,4,6};
	
	
	
	int length=sizeof(array)/sizeof(array[0]);
	
	printf("length of the array=%d\n",length);
	
	return 0;
}