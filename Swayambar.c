#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,flag;
	char *p,*q;
	scanf("%d",&n);
	p=(char *)malloc(n*sizeof(char));
	q=(char *)malloc(n*sizeof(char));
	if(getchar()=='\n')
	{}
	for(i=0;i<n;i++)
		scanf("%c",p+i);
	if(getchar()=='\n')
	{}
    for(i=0;i<n;i++)
    	scanf("%c",q+i);

	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<n;j++)
		{
			if(p[i]==q[j])
			{
				flag=1;
				p[i]=q[j]='\0';
				break;
		    }
		}
		if(flag==0)
		    break;
	}
	printf("%d",n-i);
	return 0;
}
