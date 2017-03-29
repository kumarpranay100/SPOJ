#include<iostream>
#include<string.h>
using namespace std;
int lcs[1005][1005];
int Lcs(char a[], int m, char b[], int n)
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
    char a[1001],b[1001];
    int m,n,ans;
    while(scanf("%s%s",a,b)==2)
    {
        m=strlen(a);
        n=strlen(b);
        int ans = Lcs(a,m,b,n);
        ans = 15*(m-ans) + 30*(n-ans);
        printf("%d\n",ans);
    }
    return 0;
}
