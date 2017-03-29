#include<iostream>
int min(int a,int b){ return a>b?b:a;}
using namespace std;
int lcs[2][5002];
int main()
{
    int t,n,i,j;
    scanf("%d",&n);
    char s[5002];
    scanf("%s",s);
    for(i=0;i<2;i++)
    {
        for(j=0;j<n;j++)
            lcs[i][j]=0;
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
                lcs[i%2][j]=lcs[(i+1)%2][j-1];
            else
                lcs[i%2][j]=1+min(lcs[i%2][j-1],lcs[(i+1)%2][j]);
        }
    }
    printf("%d",lcs[0][n-1]);
    return 0;
}
