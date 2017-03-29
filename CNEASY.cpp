#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,result,i;
	char s[50];
	double a[1001],smallest,ans,x;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
			cin>>s>>a[i];
		sort(a,a+n);
		smallest=a[n-1]-a[0];
		for(i=1;i<n;i++)
		{
			x=(360.00-a[i]+a[i-1]);
			smallest=min(smallest,x);
		}
		ans = smallest*12.0;
		result = (int)(ceil(ans)+0.99);
		cout<<result<<endl;
	}
	return 0;
}
