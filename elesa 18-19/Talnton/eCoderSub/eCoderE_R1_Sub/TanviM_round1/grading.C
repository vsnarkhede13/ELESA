#include<stdio.h>
#include<conio.h>
void main()
{
	int *ptr;
	int n,i,gr;
	clrscr();
	printf("\nenter no. of students:");
	scanf("%d",&n);
	printf("\nenter marks:\n");
	ptr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",(ptr+i));
	printf("\ninput info.:\nID\tmarks");
	for(i=0;i<n;i++)
	{
		printf("\n%d",i+1);
		printf("\t%d",*(ptr+i));
	}
	for(i=0;i<n;i++)
	{
		if(*(ptr+i)>37)
		{
			gr=*(ptr+i)/5;
			gr=(gr+1)*5;
			if(gr-(*(ptr+i))<3)
				*(ptr+i)=gr;
		}
	}
	printf("\nresults:\nID\tfinal marks");
	for(i=0;i<n;i++)
	{
		printf("\n%d",i+1);
		printf("\t%d",*(ptr+i));
	}
	getch();
}
