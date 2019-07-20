#include<stdio.h>
#include<conio.h>
void main()
{
	int *ptr;
	int n,i,max=0,cnt=0;
	clrscr();
	printf("\nenter no.of candles:");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	printf("\nenter height of candles:\n");
	for(i=0;i<n;i++)
		scanf("%d",(ptr+i));
	for(i=0;i<n;i++)
	{
		if(*(ptr+i)>max)
		{
			max=*(ptr+i);
			cnt=0;
		}
		if(*(ptr+i)==max)
			cnt++;
	}
	printf("\nno. of blown candles: %d",cnt);
	getch();
}