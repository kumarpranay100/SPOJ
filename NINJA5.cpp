#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,k,ans,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        int a[k];
        for(i=0;i<k;i++)
            scanf("%d",&a[i]);
        sort(a,a+k);
        ans = (a[0]-1)/2;
        for(i=1;i<k;i++)
        {
            if((a[i]-a[i-1])>3)
                ans += (a[i]-a[i-1]-2)/2;
        }
        ans += (n-a[k-1])/2;
        ans += k;
        printf("%d\n",ans);
    }
    return 0;
}
