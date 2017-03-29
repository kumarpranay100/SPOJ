#include<iostream>
using namespace std;
int dp[2001][2001];
int a[2001];
int max(int a,int b)
{
    if(a>b)     return a;
    else        return b;
}
int money(int b, int e, int age)
{
    if(b>e)
        return 0;
    if(dp[b][e]!=-1)
        return dp[b][e];
    return dp[b][e] = max( money(b+1,e,age+1) + age*a[b], money(b,e-1,age+1)+ age*a[e]);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            dp[i][j] = -1;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int x = money(0,n-1,1);
    printf("%d",x);
    return 0;
}
