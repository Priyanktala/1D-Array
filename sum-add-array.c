#include<stdio.h>
main()
{
	int i,n,sum=0,avg;
	int a[100],b[100],c[100];
	
	printf("How many value Enter in Array=");
	scanf("%d",&n);
	
	printf("Enter A Array Element=\n");
	for(i=0; i<n; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);	
	}
	printf("\nEnter B Array Element=\n");
	for(i=0; i<n; i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d\t",b[i]);	
	}
	for(i=0; i<n; i++)
	{
		printf("%d\t",b[i]);	
	}
	printf("\nsum of Two Array=%d\n");
	for(i=0; i<n; i++)
	{
		c[i]=a[i]+b[i];
		printf("%d\t",c[i]);
		
	}
	
}