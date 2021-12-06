#include<stdio.h>

typedef struct{
	int wt,cost;
}Item;
int KnapSack(Item items[],int n){
	//subsets
	int total = 1<<n;
	int subsets [total][n];
	
	for(int i=0;i<total;i++){
		int ind=0;
		for(int j=0;j<n;j++){
			if(1<<j & i){
				subsets[i][ind] = j;
				ind ++;
			}
		}
		subsets[i][ind] = -1;

	}
	for(int s=0;s<total;s++){
		for(int k=0 ; k<n && subsets[s][k]!=-1 ;k++)
			printf("%d ",subsets[s][k]);
		printf("\n");
	}
	int max_cost = 0;
	int cost = 0;
	int bag = 10;
	int wt =0;
	for(int i=0;i<total;i++){
		cost = 0; wt =0;
		for(int j=0;j<n && subsets[i][j] != -1;j++ ){
			wt += items[subsets[i][j]].wt;
			cost += items[subsets[i][j]].cost;
		}
		if(wt <= bag && cost > max_cost){
			max_cost = cost;
			printf("max : %d",max_cost);
		}
				
	}
	return max_cost;
}
void main(){
	int n;
	printf("Enter no of elemnts : ");
	scanf("%d",&n);

	Item items[n];
	printf("Enter elemnts : \n");
	for(int i=0;i<n;i++)
		scanf("%d%d",&items[i].wt,&items[i].cost);

	printf("max_cost : %d",KnapSack(items,n));

}