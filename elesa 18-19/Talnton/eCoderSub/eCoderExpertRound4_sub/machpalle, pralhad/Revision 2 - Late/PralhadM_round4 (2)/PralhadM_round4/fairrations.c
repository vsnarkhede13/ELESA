int main()
{
    int n,i,cnt=0,flg=1;
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
         if(i==(n-1) && b[i]%2==1)
            flg=0;
        if(b[i]%2==1)
        {
            b[i]++;
            b[i+1]=b[i+1]+1;
            cnt+=2;
        }
    }
    if(flg)
        printf("%d",cnt);
    else
        printf("NO");
    return 0;
}