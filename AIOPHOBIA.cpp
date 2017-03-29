#include<iostream>
#include<string.h>
using namespace std;
int lcs[6105][6105];
void Reverse(char* str)
{
    int l = strlen(str);
    char temp;
    for(int i=0,j=l-1;i<(l)/2;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}

int Lcs(char a[], char b[], int l)
{
    int i, j;
    for(i=0;i<=l;i++)
        for(j=0;j<=l;j++)
            lcs[i][j]=0;
    for(i=l-1;i>=0;i--)
    {
        for(j=l-1;j>=0;j--)
        {
            lcs[i][j] = lcs[i+1][j+1];
            if(a[i]==b[j])
                lcs[i][j]++;
            if(lcs[i][j+1]>lcs[i][j])
                lcs[i][j]=lcs[i][j+1];
            if(lcs[i+1][j]>lcs[i][j])
                lcs[i][j]=lcs[i+1][j];
        }
    }
    return lcs[0][0];
}
int main()
{
    int t,l,c;
    scanf("%d",&t);
    char s[6101], r[6101];
    while(t--)
    {
        scanf("%s",s);
        l = strlen(s);
        strcpy(r,s);
        Reverse(r);
        c = Lcs(s,r,l);
        printf("%d\n",l-c);
    }
    return 0;
}
