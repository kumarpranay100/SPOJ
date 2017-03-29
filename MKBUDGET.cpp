#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,i,j,k,ans,dp[25][30],C=1;
    scanf("%d",&n);
    while(n)
    {
        for(i=0;i<n;i++)
            for(j=0;j<30;j++)
                dp[i][j]=10000000;
        scanf("%d%d%d",&a,&b,&c);
        int s[n];
        for(i=0;i<n;i++)
            cin>>s[i];
        dp[0][s[0]]=(a+b)*s[0];
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<30;j++)
            {
                if(dp[i][j]!=10000000)
                {
                    if(s[i+1]>j)
                        dp[i+1][s[i+1]]=min(dp[i+1][s[i+1]],dp[i][j]+b*s[i+1]+a*(s[i+1]-j));
                    else
                    {
                        for(k=j;k>=s[i+1];k--)
                            dp[i+1][k]=min(dp[i+1][k],dp[i][j]+b*k+(j-k)*c);
                    }
                }
            }
        }
        ans=10000000;
        for(i=0;i<30;i++)
            ans=min(dp[n-1][i],ans);
        printf("Case %d, cost = $%d\n",C++,ans);
        scanf("%d",&n);
    }
    return 0;
}
