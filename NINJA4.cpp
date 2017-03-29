#include<iostream>
using namespace std;
int main()
{
    int t,n,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        a=(n+1)/2;
        if(a%2==0)
            a=a*(-1);
        b=(n+2)/4;
        b=b*2;
        c=n%4;
        if(c==0||c==1)
            b=b*(-1);
        printf("%d %d\n",a,b);
    }
    return 0;
}
