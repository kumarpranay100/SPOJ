#include<bits/stdc++.h>
using namespace std;
int Search(int a[],int len, int value)
{
    int u=0,v=len-1,mid,pos=-1;
	while(u<v)
	{
		mid=(u+v)/2;
		if(a[mid]==value)
        {
            pos=mid;
            break;
        }
		if(a[mid]>value)
			u=mid;
		else
            v=mid+1;
	}
	return pos;
}
int main()
{
	int n,x,pos,i,j;
	int a[5001],b[5001];
	cin>>n;
	for(i=0;i<n;i++)
        cin>>a[i];
    int ans=0;
	for(i=1;i<n;i++)
	{
		if(b[i]==0)
		{
			b[i]=1;
			x=a[i]-1;
			pos=a[i];
			ans++;
			for(j=i+1;j<n;j++)
			{
				if(pos+x==a[j])
				{
					b[j]=1;
					pos=a[j];
				}
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
