#include <stdio.h>
#define ll long long
void multiply(ll A[][2],ll B[][2])
{
    ll C[2][2]={{0,0},{0,0}};
    int i,j,k;
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            for(k=0;k<2;k++)
                C[i][j]=(C[i][j]+A[i][k]*B[k][j])%1000000007;
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            A[i][j]=C[i][j];
}
ll  mat_exp(ll  n)
{
    ll A[2][2]={{1,1},{1,0}};
    ll I[2][2]={{1,0},{0,1}};
    while(n)
    {
        if(n&1)
            multiply(I,A);
        multiply(A,A);
        n=n/2;
    }
    return I[0][1];
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll m,n;
        scanf("%lld%lld",&m,&n);
        printf("%lld\n",(mat_exp(n+2)-mat_exp(m+1)+1000000007)%1000000007);
    }
    return 0;
}
