#include<stdio.h>
int main()
{
	int testcases,i,j,k,k1,i1,i2;
	long n,n_max;
	int ar[10];
	printf("Enter testcases count\n");
	scanf("%d",&testcases);
	printf("Enter testcases count %d\n",testcases);
	for(i=0;i<testcases;i++)
	{
		printf("Enter n and k\n");
		scanf("%l %d",&n_max,&k);
		long double p[k+1];
		printf("Enter k array");
		printf("%l %d",n_max,k);
		for(j=0;j<k;j++)
		{
			printf("%d  ",j);
			scanf("%d",&ar[j]);
			p[j]=ar[j];
		}
		p[k]=1;						//%Lf
		for(n=k;n<n_max;n++)
		{
			p[k]=1;
			for(i1=k-1;i1>=0;i1++)
			p[k]=p[k]*p[i1];
			
			for(i2=0;i2<k;i2++)
			p[i2]=p[i2+1];
		}
		printf("%Lf \n",p[k]);	
	}
	return 0;
}
