#include<iostream>
using namespace std;

int max(int a, int b) { return (a > b)? a : b; }

int knapSack(int wt[],int val[],int W,int n)
{
   int i, w;
   int K[n+1][W+1];
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
    int s,n,t;
    cin>>t;
    while(t--)
    {
        cin>>s>>n;
        int wt[n], val[n];
        for(int i=0;i<n;i++)
            cin>>wt[i]>>val[i];
        int ans = knapSack(wt,val,s,n);
        printf("Hey stupid robber, you can get %d.\n",ans);
    }
    return 0;
}
