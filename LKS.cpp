#include<bits/stdc++.h>
using namespace std;
int a[2][2000001];
int wt[505],val[501];
int main()
{
    int k,n,i,j;
    scanf("%d%d",&k,&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&val[i],&wt[i]);
    }
    a[0][0]=a[1][0]=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            if(j>=wt[i])
                a[(i&1)][j]=max(a[!(i&1)][j],(a[!(i&1)][j-wt[i]]+val[i]));
            else
                a[(i&1)][j]=a[!(i&1)][j];
        }
    }
    printf("%d\n",a[(n&1)][k]);
    return 0;
}
