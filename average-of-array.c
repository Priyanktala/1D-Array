#include<stdio.h>
main()
{
	int i,n,sum=0,avg;
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
		sum=sum+a[i];	
	}
	printf("sum of Array=%d\n",sum);
	avg=sum/n;
	printf("Average of Array=%d\n",avg);
	
}