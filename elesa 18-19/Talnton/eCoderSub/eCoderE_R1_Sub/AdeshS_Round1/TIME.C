#include<stdio.h>
#include<conio.h>
void main()
{
	char t[10],c[2];
	int hr=0,min=0,sec=0,i=0;
	clrscr();
	printf("Enter time:");
	gets(t);
	hr=(t[0]-48)*10+(t[1]-48);
	min=(t[3]-48)*10+(t[4]-48);
	sec=(t[6]-48)*10+(t[7]-48);
	if(hr>12||min>59||sec>59)
	{
		printf("\nInvalid time");
		getch();
		return;
	}
	c[0]=t[8];
	c[1]=t[9];
	c[2]='\0';
	if(strcmp("pm",c)==0)
	{
		if(hr==12)
		{
			 hr=0;
		}
		hr=hr+12;
	}
	else
	{
		if(hr==12)
		  hr=0;

	}
	t[1]=hr%10+48;
	t[0]=hr/10+48;
	printf("\n time in 24 hr format :");
	for(i=0;t[i]!='\0';i++)
	{
		if(t[i]=='a'||t[i]=='p')
			break;
		printf("%c",t[i]);
	}
	getch();
	return;
}