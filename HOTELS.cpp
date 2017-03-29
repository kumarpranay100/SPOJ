#include<iostream>
using namespace std;
int main()
{
    int n,m,temp,i,j=0;
    scanf("%d%d",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    long ans=0,sum=0;
    for(i=0;i<n;i++)
    {
        if(sum+a[i]<m)
            sum=sum+a[i];
        else if(sum+a[i]==m)
        {
             sum=sum+a[i];
             ans=sum;
             break;
        }
        else
        {
            temp=sum;
            while((temp+a[i])>m)
            {
                sum = sum-a[j];
                temp = sum;
                if(sum+a[i] < m)
                    sum += a[i];
                else if(sum+a[i] == m)
                {
                     sum += a[i];
                     ans=sum;
                     break;
                }
                j++;
            }
        }
        ans=(ans>sum)?ans:sum;
    }
    printf("%ld\n",ans);
    return 0;
}
