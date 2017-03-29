#include<stdio.h>
long long Merge(int a[],int left,int mid,int right)
{
    int i=left,j=mid,k=0;
    long long ans=0;
    int temp[right-left+1];
    for(;i<=mid-1;i++)
    {
        while(j<=right)
        {
            if(a[i]>a[j])
                j++;
            else
                break;
        }
        ans += j-mid;
    }
    i=left; j=mid;
    while((i<=mid-1)&&(j<=right))
    {
        if(a[i]<=a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    while(i<=mid-1)
        temp[k++]=a[i++];
    while(j<=right)
        temp[k++]=a[j++];
    for(i=left,k=0;i<=right;i++)
        a[i]=temp[k++];
    return ans;
}
long long mergeSort(int a[],int left,int right)
{
    int mid;
    long long ans=0;
    if(right>left)
    {
        mid=(right+left)/2;
        ans=mergeSort(a,left,mid);
        ans+=mergeSort(a,mid+1,right);
        ans+=Merge(a,left,mid+1,right);
    }
    return ans;
}
int main()
{
    int t,n,i;
    long long ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        ans=mergeSort(a,0,n-1);
        printf("%lld\n",&ans);
    }
    return 0;
}
