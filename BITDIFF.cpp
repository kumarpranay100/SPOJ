#include <stdio.h>
#include<math.h>
#define mod 10000007
using namespace std;
int main()
{
	int t,n,i,max,size,c,d,Case=1,result;
	int a[10005];
	scanf("%d",&t);
	while(t--)
    {
        scanf("%d",&n);
        max=-1;
        result=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(max<a[i])
                max=a[i];
        }
        size=log2(max)+1;
        while(size--)
        {
            c=d=0;
            for(i=0;i<n;i++)
            {
                if((a[i]&1)==0)
                    c++;
                else
                    d++;
                a[i]=a[i]>>1;
            }
            result=(result+(c*d)%mod)%mod;
        }
        result=(2*result)%mod;
        printf("Case %d: %d\n",Case,result);
        Case++;
    }
	return 0;
}
