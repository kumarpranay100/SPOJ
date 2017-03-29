#include<iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int binary_search(int x,int b[],int n)
{
    int u=0,v=n-1,m;
    while(u<=v)
    {
        m=(u+v)/2;
        if(b[m]==x)
            return m;
        else
        {
            if(b[m]>x)
                v=m-1;
            else
                u=m+1;
        }
    }
    return -1;
}
int main()
{
    int t,m,n,i,e;
    scanf("%d",&m);
    while(m!=0)
    {
        int a[m],c[m];
        e=0;
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
            e+=a[i];
            c[i]=e;
        }
        scanf("%d",&n);
        int b[n],d[n];
        e=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
            e+=b[i];
            d[i]=e;
        }
        int pos1=0,pos2=0,y=0,result=0,p,q;
        for(i=0;i<m;i++)
        {
            e=binary_search(a[i],b,n);
            if(e>=0)
            {
                y++;
                if(y==1)
                {
                    p=c[i];
                    q=d[e];
                }
                else
                {
                    p=c[i]-c[pos1];
                    q=d[e]-d[pos2];
                }
                result+=max(p,q);
                pos1=i;
                pos2=e;
            }
        }
        if(y>0)
        {
            p=c[m-1]-c[pos1];
            q=d[n-1]-d[pos2];
        }
        else
        {
            p=c[m-1];
            q=d[n-1];
        }
        result+=max(p,q);
        printf("%d\n",result);
        scanf("%d",&m);
    }
    return 0;
}
