#include<iostream>
int main()
{
   long long n,i,temp;
   scanf("%lld",&n);
   while(n!=-1)
   {
        i=0;
        temp=1;
        while(1)
        {
            temp += 6*i;
            if(temp>n)
            {
                printf("N\n");
                break;
            }
            else if(temp==n)
            {
                printf("Y\n");
                break;
            }
            else
                i=i+1;
        }
        scanf("%lld",&n);
    }
    return 0;
}
