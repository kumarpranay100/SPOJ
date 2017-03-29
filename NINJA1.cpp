#include<iostream>
using namespace std;
int main()
{
    int t,n,i,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n], b[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);
        x=min(a[0],b[0]);
        for(i=1;i<n;i++)
        {
            y=min(a[i],b[i]);
            if(y>=x)
                x=y;
            else
            {
                y=max(a[i],b[i]);
                if(y>=x)
                    x=y;
                else
                    break;
            }
        }
        if(i==n)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
