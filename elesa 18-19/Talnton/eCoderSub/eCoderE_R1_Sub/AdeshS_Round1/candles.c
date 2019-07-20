int main()
{
  int i,n,max,j=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0,max=a[0];i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
        for(i=0;i<n;i++)
        {
            if(a[i]==max)
                j++;
        }
    printf("%d",j);
    return 0;
}