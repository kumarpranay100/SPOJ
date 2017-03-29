#include<iostream>
#include<stdio.h>
using namespace std;
int max(int a, int b, int c=0)
{
    if(a>b)
    {
        if(a>c) return a;
        else    return c;
    }
    else
    {
        if(b>c) return b;
        else return c;
    }
}
int main()
{
    int t,h,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>h>>k;
        int a[h][k], b[h][k];
        for(i=0;i<h;i++)
        {
            for(j=0;j<k;j++)
            {
                cin>>a[i][j];
                if(i==0)
                    b[0][j]=a[0][j];
                else
                {
                    if(j==0)
                        b[i][j] = a[i][j] + max(b[i-1][j], b[i-1][j+1]);
                    else if(j == k-1)
                        b[i][j] = a[i][j] + max(b[i-1][j-1], b[i-1][j]);
                    else
                        b[i][j] = a[i][j] + max(b[i-1][j-1], b[i-1][j], b[i-1][j+1]);
                }
            }
        }
        int largest = b[h-1][0];
        for(j=1;j<k;j++)
        {
            if(b[h-1][j]>largest)
                largest = b[h-1][j];
        }
        printf("%d\n",largest);
    }
    return 0;
}
