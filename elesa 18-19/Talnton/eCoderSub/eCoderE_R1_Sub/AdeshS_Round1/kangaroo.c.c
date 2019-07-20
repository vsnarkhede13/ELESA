int main()
{
	int kangaroo(int ,int ,int ,int);
	int x1,v1,x2,v2,s;
	scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
	s=kangaroo(x1,v1,x2,v2);
	if(s==1)
	printf("YES");
	else
	printf("NO");
	return 0;
}
int kangaroo(int x1, int v1, int x2, int v2)
{
	int s1=x1,s2=x2,i=1;
	while(s1<s2)
	{
		if(v1>v2)
		{
			s1=v1*i+x1;
			s2=v2*i+x2;
		}
		else
		{
			s1=v2*i+x2;
			s2=v1*i+x1;
		}
		if(s1==s2)
		break;
		i++;
	}
	if(s1==s2)
	return 1;
	return 0;
}

