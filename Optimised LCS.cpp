#include<iostream>
#include<string.h>
using namespace std;
int lcs[2][5002];
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
int Lcs(char a[],char b[],int l)
{
    int i, j;
    for(i=0;i<2;i++)
        for(j=0;j<=l;j++)
            lcs[i][j]=0;
    for(i=l-1;i>=0;i--)
    {
        for(j=l-1;j>=0;j--)
        {
            lcs[0][j] = lcs[1][j+1];
            if(a[i]==b[j])
                lcs[0][j]++;
            if(lcs[0][j+1]>lcs[0][j])
                lcs[0][j]=lcs[0][j+1];
            if(lcs[1][j]>lcs[0][j])
                lcs[0][j]=lcs[1][j];
        }
        for(j=0;j<=l;j++)
            lcs[1][j]=lcs[0][j];

    }
    return lcs[0][0];
}
int main()
{
    int t,l,c;
    scanf("%d",&l);
    char s[5001],r[5001];
    scanf("%s",s);
    strcpy(r,s);
    Reverse(r);
    c = Lcs(s,r,l);
    printf("%d",l-c);
    return 0;
}
