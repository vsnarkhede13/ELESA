int main()
{
    int i=1,n,p=5,c=0,k;
    scanf("%d",&n);
    while(i<=n)
    {
        k=p/2;
       c+=k;
        p=k*3;
        i++;
    }
    printf("%d",c);
    return 0;
}