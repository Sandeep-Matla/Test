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
void Int_permute(int* a,int l,int n,int job_costs[n][n]){
	if(l==n){
		for(int x=0;x<n;x++)
			printf("%d ",a[x] );
		printf("\n");
		cost = 0;
		for(int i=0;i<n;i++){
			cost += job_costs[i][a[i]];
		}
		printf("perm cost : %d\n",cost );
		if(cost < min_cost){
			min_cost = cost;
			for(int i=0;i<n;i++){
				best_perm[i] = a[i];
			}
		}
		printf("min_cost : %d\n",min_cost );
	}
	for(int i=l;i<n;i++){
		swap(a,l,i);
		Int_permute(a,l+1,n,job_costs);
		swap(a,l,i);
	}
}
void main(){
	int n;
	printf("Enter no of jobs : ");
	scanf("%d",&n);
	int job_costs[n][n];
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=i;
	}
	best_.perm = (int*)malloc(n*sizeof(int));
	printf("ENter job_costs : \n");
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&job_costs[i][j]);
	Int_permute(a,0,n,job_costs);
	printf("min_cost%d\n",min_cost );
	for(int i=0;i<n;i++)
		printf("%d",best_perm[i]);
}