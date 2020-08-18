#include<stdio.h>

int main()
{
	int lmin,lmax,bmin,bmax,max=0,i,j,n,p,q,min,total;
	scanf("%d %d %d %d",&lmin,&lmax,&bmin,&bmax);
	for(i=lmin;i<=lmax;i++)
	{
		for(j=bmin;j<=bmax;j++)
		{
			p=i;
			n=0;
			q=j;
			total=i*j;
			while(total>0)
			{
				min=p>q?q:p;
				n++;
				total=total-min*min;
				if(p!=min)
					p=p-min;
				else
					q=q-min;
		    }
		    
		    	max=max+n;
		}
	}
	printf("%d",max);
	return 0;
}
