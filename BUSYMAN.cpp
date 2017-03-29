#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t,a,b,i,j,n,count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector < pair<int,int> > v;
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            v.push_back(make_pair(b,a));
        }
        sort(v.begin(),v.end());
        i=0;
        count=1;
        for(j=1;j<n;j++)
		{
			if(v[j].second>=v[i].first)
			{
				i=j;
				count++;
			}
		}
		printf("%d\n",count);
    }
    return 0;
}
