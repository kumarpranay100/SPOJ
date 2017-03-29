#include<iostream>
using namespace std;
int main()
{
   int t,C,i;
   scanf("%d",&t);
   char s[50];
   while(t--)
   {
      scanf("%d%s",&C,s);
      int a[8]={0};
      for(i=0;i<38;i++)
      {
         if(s[i]=='T' && s[i+1]=='T' && s[i+2]=='T')
            a[0]++;
         else if(s[i]=='T' && s[i+1]=='T' && s[i+2]=='H')
            a[1]++;
         else if(s[i]=='T' && s[i+1]=='H' && s[i+2]=='T')
            a[2]++;
         else if(s[i]=='T' && s[i+1]=='H' && s[i+2]=='H')
            a[3]++;
         else if(s[i]=='H' && s[i+1]=='T' && s[i+2]=='T')
            a[4]++;
         else if(s[i]=='H' && s[i+1]=='T' && s[i+2]=='H')
            a[5]++;
         else if(s[i]=='H' && s[i+1]=='H' && s[i+2]=='T')
            a[6]++;
         else if(s[i]=='H' && s[i+1]=='H' && s[i+2]=='H')
            a[7]++;
      }
      printf("%d ",C);
      for(i=0;i<8;++i)
         printf("%d ",a[i]);
      printf("\n");
   }
   return 0;
}
