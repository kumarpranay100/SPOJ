#include<iostream>
using namespace std;
int dp[21][101],a[21],b[21];
int main()
{
    int n,m,i,j,k;
    scanf("%d%d",&m,&n);
    while(m!=0)
    {
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                dp[i][j]=0;
        for(i=0;i<m;i++)
            scanf("%d%d",&a[i],&b[i]);
        for(i=a[0];i<=b[0];i++)
            dp[0][i]=1;
        for(i=1;i<m;i++)
        {
            for(j=0;j<=n;j++)
            {
                dp[i][j]=0;
                for(k=a[i];k<=b[i];k++)
                  if (j-k>=0)
                    dp[i][j] += dp[i-1][j-k];
            }
        }
        printf("%d\n",dp[m-1][n]);
        scanf("%d%d",&m,&n);
    }
    return 0;
}
