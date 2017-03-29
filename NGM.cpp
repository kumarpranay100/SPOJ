#include<iostream>
using namespace std;
int main()
{
	int x;
	scanf("%d",&x);
	if(x%10==0)
		printf("2");
	else
		printf("1\n%d",x%10);
	return 0;
}
