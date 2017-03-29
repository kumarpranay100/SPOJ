#include<stdio.h>
#define MAX 100000000;
int main()
{
    int t,n,k,i,j;
    int val[101],ans[201],flag[201],count[201];
    scanf("%d",&t);
    while(t--)
	{
        scanf("%d%d",&n,&k);
        for(i=1;i<=k;i++)
            scanf("%d",&val[i]);
        for(i=1;i<=k;i++)
        {
            ans[i]=MAX;
            flag[i]=0;
            count[i]=0;
        }
        ans[0]=count[0]=0;
        flag[0]=1;
        for(j=1;j<=k;j++)
        {
            if(val[j]!=-1)
            {
                for(i=0;i<=k;i++)
                {
                    if(flag[i])
                    {
                        if(count[i]+1<=n)
                            flag[i+j]=1;
                        if(ans[i+j]==0||ans[i+j]>ans[i]+val[j] && count[i]+1<=n)
                        {
                            if(ans[i+j]==0)
                                count[i+j]=1;
                            else
                                count[i+j]=count[i]+1;
                            ans[i+j]=ans[i]+val[j];
                        }
                    }
                }
            }
        }
        if(!flag[k])
            printf("%d\n",-1);
        else
            printf("%d\n",ans[k]);
	}
    return 0;
}
