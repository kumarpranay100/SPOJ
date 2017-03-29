#include<stdio.h>
using namespace std;
#define max 86029000
bool b[43014600];
int p[5000100];
int main()
{
    int q,k,i,count=1;
    for(int i=3;i<=9257;i+=2)
        if(!b[(i-3)>>1])
            for(int j=i*i;j<max;j+=i)
                if(j&1)
                    b[(j-3)>>1]=1;
    p[0]=2;
    for(int i=0;2*i<max;i++)
        if(!b[i])
            p[count++]=2*i+3;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&k);
        printf("%d\n",p[k-1]);
    }
    return 0;
}
