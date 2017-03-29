#include<stdio.h>
int tree[10001];
int size[10001]={0};
int root(int i)
{
	while(tree[i]!=i)
    {
        tree[i]=tree[tree[i]];
        i=tree[i];
    }
	return i;
}
int find(int A, int B)
{
	return(root(A)==root(B));
}
void q_union(int A, int B)
{
    int p=root(A);
    int q=root(B);
    if(size[p]<size[q])
    {
        tree[p]=tree[q];
        size[q]+=size[p];
    }
    else
    {
        tree[q]=tree[p];
        size[p]+=size[q];
    }
}
int main()
{
	int N,M,u,v,i,j,temp;
	scanf("%d%d",&N,&M);
	if(M!=N-1)
    {
		printf("NO\n");
		return 0;
	}
	if(N==1)
		return 0;
	for(i=0;i<N;i++)
		tree[i]=i;
	for(i=0;i<M;i++)
    {
		scanf("%d%d",&u,&v);
		u--; v--;
		if (!find(u, v))
			q_union(u, v);
		else
		{
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}
