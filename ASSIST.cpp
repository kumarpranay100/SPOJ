#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,count=0;
    int a[3001];
    list<int> L;
    list <int>::iterator it,temp;
    for(i=2;i<34000;i++)
        L.push_back(i);
    while(count<=3000&&!L.empty())
    {
        a[count++]=L.front();
        i=a[count-1];
        j=0;
		for(it=L.begin();it!=L.end();j++)
        {
			temp=it;
            temp++;
			if(j%i==0)
                L.erase(it);
            it=temp;
		}
    }
    scanf("%d",&n);
    while(n)
    {
        printf("%d\n",a[n-1]);
        scanf("%d",&n);
    }
    return 0;
}
