#include<iostream>
#include<math.h>
#define M 100005
using namespace std;
long long a[M],b[M];
int main()
{
    int t;
    scanf("%d",&t);
    long long x,y,i,j,k,count,len;
    for(i=2;i<M;i++)
        a[i] = 1;
    for(i=2;i<=sqrt(M);i++)
    {
        if(a[i]==1)
        for(j=2;i*j<=M;j++)
            a[i*j] = 0;
    }
    count = 0;
    for(i=2;i<M;i++)
    {
        if(a[i]==1)
            b[count++] = i;
    }
    while(t--)
    {
        scanf("%lld%lld",&x,&y);
        if(x==1)
            x = 2;
        len = y-x+1;
        for(i=0;i<len;i++)
            a[i] = 1;
        for(j=0;j<count&&b[j]<=sqrt(y);j++)
        {
            if(x>b[j])
            {
                k = b[j]*(x/b[j]);
                if(k==b[j]||k<x)
                    k += b[j];
                for(i=k-x;i<len&&k<=y;i=i+b[j])
                    a[i] = 0;
            }
            else
            {
                k = 2*b[j];
                for(i=k-x;i<len&&k<=y;i+=b[j])
                    a[i] = 0;
            }
        }
        for(i=0;i<len;i++)
            if(a[i]==1)
                printf("%lld\n",i+x);
        printf("\n");
    }
    return 0;
}
