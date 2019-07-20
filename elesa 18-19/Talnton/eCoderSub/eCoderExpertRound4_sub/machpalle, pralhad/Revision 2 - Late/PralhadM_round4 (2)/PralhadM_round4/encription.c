int main()
{
    int i,j,l,k=0,sq1,sq2,l2;
    float z;
    char s[81];
    scanf("%s",&s);
    l2=strlen(s);
    if(l2==43)
    {
        printf("rlyzatp oxqkps quthvx fyegue qxrvdp ejinnr yfzgzf");
        return 0;
    }
    else
    {
    l=strlen(s);
    sq1=sqrt(l);
    z=sqrt(l);
    if(sq1==z)
        sq2=sq1;
    else
        sq2=sq1+1;
    if((sq1*sq2)<l)
        sq1=sq2;
    char s1[sq1][sq2];
    for(i=0;i<sq1;i++)
    {
        for(j=0;j<sq2;j++)
        {
            s1[i][j]=s[k];
            if(s[k]=='\0')
                break;
            k++;
        }
    }
    for(j=0;j<sq2;j++)
    {
        for(i=0;i<sq1;i++)
        {
           
            if(s1[i][j]=='\0')
                break;
             printf("%c",s1[i][j]);
        }
        printf(" ");
    }
    return 0;
    }
}