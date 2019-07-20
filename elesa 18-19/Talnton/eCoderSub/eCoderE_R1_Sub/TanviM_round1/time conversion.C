#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int h,m,s;
	char c[4];
	printf("\nenter time:");
	scanf("%d %d %d %s",&h,&m,&s,c);
	printf("\ntime- %0.2d:%0.2d:%0.2d %s",h,m,s,c);
	if(strcmp("AM",c)==0)
	{
		if(h==12)
			h=00;
	}
	if(strcmp("PM",c)==0)
		h=h+12;
	printf("\nmilitary time- %0.2d:%0.2d:%0.2d",h,m,s);
	getch();
}