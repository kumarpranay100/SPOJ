#include <iostream>
using namespace std;
int a[1000001];
int main()
{
    int k,l,n,i,x;
    scanf("%d%d%d",&k,&l,&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<=1000000;i++)
    {
        if(!a[i-1])
            a[i]=1;
        else if(i-k>=0&&!a[i-k])
            a[i]=1;
        else if(i-l>=0&&!a[i-l])
            a[i]=1;
        else
            a[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(a[x])
            printf("A");
        else
            printf("B");
    }
    return 0;
}
