#include<iostream>
using namespace std;
int lcs[2001][2001];
int Lcs(int a[], int m, int b[], int n)
{
    int i, j;
    for(i=0;i<=m;i++)
        for(j=0;j<=n;j++)
            lcs[i][j]=0;
    for(i=m-1;i>=0;i--)
    {
        for(j=n-1;j>=0;j--)
        {
            lcs[i][j] = lcs[i+1][j+1];
            if(a[i]==b[j])
                lcs[i][j]++;
            if(lcs[i][j+1]>lcs[i][j])
                lcs[i][j]=lcs[i][j+1];
            if(lcs[i+1][j]>lcs[i][j])
                lcs[i][j]=lcs[i+1][j];
        }
    }
    return lcs[0][0];
}
int main()
{
    int t,m,n,ans,x;
    int a[2001], b[2001];
    scanf("%d",&t);
    while(t--)
    {
        ans=m=0;
        scanf("%d",&a[m]);
        while(a[m]!=0)
        {
            m++;
            scanf("%d",&a[m]);
        }
      A:n=0;
        scanf("%d",&b[n]);
        if(b[n]==0)
        {
            printf("%d\n",ans);
            continue;
        }
        while(b[n]!=0)
        {
            n++;
            scanf("%d",&b[n]);
        }
        x=Lcs(a,m,b,n);
        if(x>ans)
            ans=x;
        goto A;
    }
    return 0;
}
