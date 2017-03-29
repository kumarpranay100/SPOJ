#include<iostream>
using namespace std;
int K[102][502];
int max(int a, int b) { return (a > b)? a : b; }

int knapSack(int wt[],int val[],int W,int n)
{
   int i, w;
   for (i=0;i<=n;i++)
   {
       for(w=0;w<=W;w++)
       {
           if (i==0||w==0)
               K[i][w]=0;
           else if (wt[i-1]<= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
   return K[n][W];
}

int main()
{
    int s,n,fun,mon;
    A:scanf("%d%d",&s,&n);
    if(s==0)
        return 0;
    int wt[n], val[n];
    for(int i=0;i<n;i++)
        scanf("%d%d",&wt[i],&val[i]);
    fun = knapSack(wt,val,s,n);
    for(int i=0;i<=s;i++)
    {
        if(K[n][i]==fun)
        {
            mon = i;
            break;
        }
    }
    printf("%d %d\n",mon,fun);
    goto A;
}
