#include<iostream>
#include<string.h>
using namespace std ;
int main()
{
  	char a[25],b[2000];
	int i,j,k,l,m,n,flag;
	while(scanf("%s%s",a,b)!=EOF)
	{
		m=strlen(a) ;
		n=strlen(b) ;
		char c[m][1000] ;
		for(i=0;i<m;i++)
			c[i][0]='\0';
		for(i=0,k=0,flag=2;k<m&&i<n;k++)
		{
			l=0;
			while(c[k][l]!='\0')
				l++;
			for(j=0;j<flag;j++)
			{
				c[k][l++]=b[i++] ;
				if(i==n)
					break ;
			}
			c[k][l]='\0' ;
			if(flag==2)
				flag=1 ;
			else
				flag=2 ;
			if(k==m-1)
				k=-1;
		}
		for(i=1;i<=m;i++)
		{
			j =0;
			while(i!=(int)(a[j]-48))
				j++;
			for(k=0;c[j][k]!='\0';k++)
				printf("%c",c[j][k]);
		}
		printf("\n") ;
	}
	return 0 ;
}
