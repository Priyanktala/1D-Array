#include<stdio.h>
main()
{
	int i,n;
	int a[100];
	
	printf("How many value Enter in Array=");
	scanf("%d",&n);
	
	printf("Enter Array Element=\n");
	for(i=0; i<n; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	}
}