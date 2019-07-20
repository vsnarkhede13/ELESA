int main()
{
    int i=0,n;
    scanf("%d",&n);
    int grade[n];
    while(i<n)
    {
        scanf("%d",&grade[i]);
            i++;
    }
    i=0;
    while(i<n)
    {
        if(grade[i]>=38)
        {
            if(grade[i]%5>2)
                grade[i]=((grade[i]/5)+1)*5;
        }
        printf("%d\n",grade[i]);
        i++;
    }
    return 0;
}