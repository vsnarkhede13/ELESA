#include<stdio.h>
#include<conio.h>
int kang(long int,long int,long int,long int);
void main()
{
	long int x1,x2,v1,v2;
	int res;
	clrscr();
	printf("\nenter values x1,v1,x2,v2: ");
	scanf("%ld %ld %ld %ld",&x1,&v1,&x2,&v2);
	res=kang(x1,v1,x2,v2);
	if(res==0)
		printf("\nNO");
	else
		printf("\nYES");
	getch();
}
int kang(long int x1,long int v1,long int x2,long int v2)
{

	while(1)
	{
		if(((x1<x2)&&(v1<v2))||((x1>x2)&&(v1>v2)))
			return (0);
		x1=x1+v1;
		x2=x2+v2;
		if(x1==x2)
			break;
	}
	return (1);
}
