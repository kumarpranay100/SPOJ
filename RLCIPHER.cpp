#include<iostream>
using namespace std;
int main()
{
	int t,n,x;
	cin>>t;
	int a[]={-4,-3,-2,-4,-4,-3,-4};
	while(t--)
    {
		cin>>n;
		while(n--)
		{
			cin>>x;
			if(x>=6)
				printf("-4 ");
			else if(x<0)
				printf("%d ",x);
			else
				printf("%d ",a[x]);
		}
		cout<<endl;
	}
	return 0;
}
