int main()
{
    int i,j,n,s1=0,s2=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                s1+=a[i][j];
            if(i+j==n-1)
                s2+=a[i][j];
        }
    }
    printf("%d",abs(s2-s1));
    return 0;
    
}
