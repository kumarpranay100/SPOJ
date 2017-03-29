#include<iostream>
using namespace std;
int main()
{
    long long a,b;
    char c;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a;
        while(1)
        {
            cin>>c;
            if(c=='=')
                break;
            cin>>b;
            if(c=='+')
                a=a+b;
            else if(c=='-')
                a=a-b;
            else if(c=='*')
                a=a*b;
            else if(c=='/')
                a=a/b;
        }
        cout<<a<<endl;
    }
    return 0;
}
