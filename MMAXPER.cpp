#include <bits/stdc++.h>
using namespace std;
int a[1001]={0,1,0,0,0,0,0,5,0,0,1,0,0,2,0,0,0,0,0,4,0,0,0,3,0,0,0,0,3,0,0,2,3,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,5,0,0,0,0,0,0,0,0,3,0,0,3,0,0,0,2,0,0,0,0,4,0,0,4,0,0,3,0,0,1,0,0,2,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,0,0,5,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,4,0,4,0,3,5,0,0,0,0,0,0,0,0,0,3,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,5,0,0,0,3,0,0,0,0,0,5,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,3,0,5,0,0,0,0,0,0,0,2,3,0,0,0,0,0,0,0,2,0,0,5,0,0,0,0,0,5,3,0,0,0,0,0,5,0,0,5,0,5,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,5,0,0,6,0,5,5,0,0,0,0,0,0,0,5,0,0,6,0,0,0,4,0,0,5,0,0,0,0,5,5,0,0,0,0,6,0,0,0,0,0,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,6,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,4,0,0,4,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,6,0,3,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,3,0,0,0,0,5,5,0,0,0,0,0,0,0,0,5,0,0,6,0,5,5,0,0,0,0,0,3,0,0,0,0,6,0,0,0,6,0,3,4,0,0,0,0,0,0,0,0,4,0,0,0,0,0,3,0,5,0,0,0,0,0,0,2,0,0,5,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,5,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,6,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,3,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,3,0,0,6,0,0,0,0,0,0,0,0,3,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,4,0,3,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,5,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,5,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,4,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,6,0,4,0,0,4,0,0,3,0,0,4,0,3,5,0,0,0,0,0,0,0,3,0,5,0,0,0,0,0,0,0,5,5,0,0,0,0,6,0,0,4,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,3,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,6,0,1,};
int main()
{
    ios::sync_with_stdio(false);
    int t,n,sum,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<=1000)
        {
            if(a[n])

                cout<<a[n]<<"\n";
            else
                cout<<"-1\n";
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
            cout<<"1\n";
        else
        {
            if(a[sum])
                cout<<a[sum]+1<<"\n";
            else
                cout<<"-1\n";
        }
    }
    return 0;
}
