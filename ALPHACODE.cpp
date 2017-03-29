#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[5001];
    scanf("%s",s);
    while(strcmp(s,"0")!=0)
    {
        int l = strlen(s);
        long long a[l];
        for(int i=0;i<l;i++)
            a[i]=0;
        a[0]=1;
        if(s[1]<='9' &&s [1]>='1')
                a[1] = 1;
        if(s[0]=='1')
        {
            if(s[1]!='0')
                a[1] = 2;
            else
                a[1] = 1;
        }
        else if(s[0]=='2' && s[1]<='6')
        {
            if(s[1]!='0')
                a[1] = 2;
            else
                a[1] = 1;
        }
        for(int i=2;i<l;i++)
        {
            if(s[i]<='9' && s[i]>='1')
                a[i] += a[i-1];
            if(s[i-1]=='1')
                a[i] += a[i-2];
            else if(s[i-1]=='2' && s[i]<='6')
                a[i] += a[i-2];
        }
        printf("%lld\n",a[l-1]);
        scanf("%s",s);
    }
    return 0;
}
