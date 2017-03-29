#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,key;
    char a[100001];
    cin>>t;
    while(t--)
    {
        scanf("%d%s",&key,a);
        int l = strlen(a);
        for(int i=0;i<l;i++)
        {
            if(a[i]=='.')
                cout<<' ';
            else
            {
                x=int(a[i]);
                if(key<=25)
                {
                    if(islower(a[i]))
                        x = ((x-97+key)%26)+97;
                    else
                        x = ((x-65+key)%26)+65;
                }
                else
                {
                    if(islower(a[i]))
                        x = ((x-97+key)%26)+65;
                    else
                        x = ((x-65+key)%26)+97;
                }
                printf("%c",char(x));
            }
        }
        printf("\n");
    }
    return 0;
}
