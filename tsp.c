#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int i,int j){
	int temp = a[i];
	a[i]=a[j];
	a[j] = temp;
}
int *best_perm;
int min_cost = (1<<31)-1;
int cost=0;
void Int_permute(int* a,int l,int n,int map[n][n]){
	if(l==n-1){
		for(int x=0;x<n-1;x++)
			printf("%d ",a[x] );
		printf("\n");
		cost = 0;
		for(int i=0;i<n-1;i++){
			int node = a[i];
			if(i==0 || i==n-2)
				cost+= map[node][0];
			else{
				int next = a[i+1];
				cost += map[node][next];
			}
		}
		printf("\ncost : %d\n",cost );
		printf("perm cost : %d\n",cost);
		if(cost < min_cost){
			min_cost = cost;
			for(int i=0;i<n-1;i++){
				best_perm[i] = a[i];
			}
		}
		printf("min_cost : %d\n",min_cost );
	}
	for(int i=l;i<n-1;i++){
		swap(a,l,i);
		Int_permute(a,l+1,n,map);
		swap(a,l,i);
	}
}
void main(){
	int n;
	printf("Enter no of nodes : ");
	scanf("%d",&n);
	int map[n][n];
	int a[n];
	for(int i=1;i<n;i++){
		a[i-1]=i;
	}
	best_perm = (int*)malloc(n*sizeof(int));
	printf("ENter matrix : \n");
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&map[i][j]);
	Int_permute(a,0,n,map);
	printf("min_cost : %d\n",min_cost );
	for(int i=0;i<n-1;i++)
		printf("%d",best_perm[i]);
}