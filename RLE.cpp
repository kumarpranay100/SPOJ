#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int l,count,i,j;
	char s[100001],ch;
	while(scanf("%s",s)!=EOF)
	{
		l=strlen(s);
		if(l==3)
		{
			printf("%s\n",s);
			continue;
		}
		ch=s[0];
		count=1;
		for(i=1;i<=l;i++)
		{
			if(ch==s[i])
				count++;
			else if(ch!=s[i])
			{
				if(count>3)
                    printf("%d!%c",count,ch);
				else
					for(j=0;j<count;j++)
						printf("%c",ch);
				ch=s[i];
				count=1;
			}
		}
		printf("\n");
	}
	return 0;
}
