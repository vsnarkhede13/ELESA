int main()
{	char t[10],p[8];
	int i,d=0;
	for(i=0;i<10;i++)
	scanf("%c",&t[i]);
	if((t[0]!='0' || t[0]!='1') && (t[3]>'5') && (t[6]>'5') && (t[8]!='A' || t[8]!='P') && (t[9]!='M'))
	return 0;
       if(t[8]=='A')
       {
		if(t[0]=='1' && t[1]=='2')
		{	p[0]='0';
			p[1]='0';
			for(i=2;i<8;i++)
			p[i]=t[i];
		}
		else
		{	for(i=0;i<8;i++)
			p[i]=t[i];
		}
		for(i=0;i<8;i++)
		printf("%c",p[i]);
       }
       if(t[8]=='P')
       {
           if(t[0]=='1' && t[1]=='2')
		{	
			for(i=0;i<8;i++)
			p[i]=t[i];
		}
        else
        {    
		 if(t[1]<'8' && t[0]=='0')
		 {
			p[0]='1';
			d=t[1]+2;
			p[1]=d;
		 }
		 else
		 {	 if((t[1]=='8' || t[1]=='9') && (t[0]=='0'))
			{
				p[0]='2';
				d=t[1]-8;
				p[1]=d;
			}
			 else
			 {	p[0]='2';
				d=t[1]+2;
				p[1]=d;
			 }
		 }
        }
            
		for(i=2;i<8;i++)
		p[i]=t[i];
		for(i=0;i<8;i++)
		printf("%c",p[i]);

       }
       return 0;
}