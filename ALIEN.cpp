#include<iostream>
using namespace std;
int main()
{
    int t,n,m,temp,i,j,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        int a[n];
        j=0;x=0;y=0;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        long ans=0,sum=0;
        for(i=0;i<n;i++)
        {
            sum += a[i];
            x++;
            if((y<x && sum<=m)||(y==x && ans>sum))
            {
                y = x;
                ans = sum;
            }
            while(sum>m)
            {
                sum -= a[j];
                x--;
                j++;
            }
            if((y<x && sum<=m)||(y==x && ans>sum))
            {
                y=x;
                ans=sum;
            }
        }
        printf("%ld %d\n",ans,y);
    }
    return 0;
}
