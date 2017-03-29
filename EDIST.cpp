#include<iostream>
#include<string.h>
int t[2100][2100];
char a[2100], b[2100];
using namespace std;
int min(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}
int main()
{
    int q,i,j,m,n,x,y;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%s%s",a,b);
        m = strlen(a);
        n = strlen(b);
        for(i = 0; i <= m; i++)
            t[i][0] = i;
        for(j = 1; j <= n; j++)
            t[0][j] = j;
        for(i = 1; i <= m; i++)
        {
            for(j = 1; j <=n; j++)
            {
                x = min(t[i-1][j]+1,t[i][j-1]+1);
                y = t[i-1][j-1];
                if(a[i-1] != b[j-1])
                    y += 1;
                t[i][j] = min(x,y);
            }
        }
        printf("%d\n", t[m][n]);
    }
    return 0;
}
