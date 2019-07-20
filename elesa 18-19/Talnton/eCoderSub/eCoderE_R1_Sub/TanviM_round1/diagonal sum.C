#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,sum=0;
	int *arr;
	clrscr();
	printf("\nenter value for n:");
	scanf("%d",&n);
	arr=(int *)malloc(n*n*sizeof(int));
	printf("\nenter values:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",(arr+i*n+j));
		}
	}
	printf("\ninput matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",*(arr+i*n+j));
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j)
				continue;
			sum+=*(arr+i*n+j);
		}
	}
	printf("\ndiagonal sum: %d",sum);
	getch();
}