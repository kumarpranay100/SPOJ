#include<bits/stdc++.h>
#define gc getchar_unlocked
using namespace std;
int a[1001]={0,1,0,0,0,0,0,5,0,0,1,0,0,2,0,0,0,0,0,4,0,0,0,3,0,0,0,0,3,0,0,2,3,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,5,0,0,0,0,0,0,0,0,3,0,0,3,0,0,0,2,0,0,0,0,4,0,0,4,0,0,3,0,0,1,0,0,2,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,0,0,5,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,4,0,4,0,3,5,0,0,0,0,0,0,0,0,0,3,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,5,0,0,0,3,0,0,0,0,0,5,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,3,0,5,0,0,0,0,0,0,0,2,3,0,0,0,0,0,0,0,2,0,0,5,0,0,0,0,0,5,3,0,0,0,0,0,5,0,0,5,0,5,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,5,0,0,6,0,5,5,0,0,0,0,0,0,0,5,0,0,6,0,0,0,4,0,0,5,0,0,0,0,5,5,0,0,0,0,6,0,0,0,0,0,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,6,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,4,0,0,4,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,6,0,3,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,3,0,0,0,0,5,5,0,0,0,0,0,0,0,0,5,0,0,6,0,5,5,0,0,0,0,0,3,0,0,0,0,6,0,0,0,6,0,3,4,0,0,0,0,0,0,0,0,4,0,0,0,0,0,3,0,5,0,0,0,0,0,0,2,0,0,5,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,5,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,6,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,3,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,3,0,0,6,0,0,0,0,0,0,0,0,3,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,4,0,3,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,5,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,5,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,4,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,6,0,4,0,0,4,0,0,3,0,0,4,0,3,5,0,0,0,0,0,0,0,3,0,5,0,0,0,0,0,0,0,5,5,0,0,0,0,6,0,0,4,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,3,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,6,0,1,};
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
    int t,n,sum,y;
    scanint(t);
    while(t--)
    {
        scanint(n);
        if(n<=1000)
        {
            if(a[n])
                printf("%d\n",a[n]);
            else
                printf("-1\n");
            continue;
        }
        sum = 0;
        while(n)
        {
            y = n%10;
            sum += y*y;
            n /= 10;
        }
        if(sum==1)
            printf("1\n");
        else
        {
            if(a[sum])
                printf("%d\n",a[sum]+1);
            else
                printf("-1\n");
        }
    }
    return 0;
}
