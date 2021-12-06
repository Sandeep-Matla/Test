#include<stdio.h>

typedef struct
{
	int wt;
	int cost;
}Item;
void swap(float arr, int i ,int j){
	;
}
int Sort_Units(float units[] ,Item items[], int len){

	for(int i=0;i<n;i++){
		for(int j=j;j<n;j++){
			if(arr[i]<arr[j]){
				swap(arr,i,j);
				swap(items,i,j);
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		arr[i];
	}
}
////// Main Function....
int KnapSack(Item items[], int bw , int n ){
	int Cost=0;
	float unit_costs [n];
	for(int i=0;i<n;i++){
		unit_costs[i] = (float)items[i].cost / items[i].wt;
		printf("%f ",unit_costs[i] );
	}
	printf("\n");
	
	Sort_Units(unit_costs);

	while(bw>0){
		if(bw - items[i].wt >0)
			Cost += unit_costs[]
	}
	return Cost;
	
}

void main(){
	int n;
	printf("Enter no.of items : ");
	scanf("%d",&n);

	Item items[n];

	printf("Enter item_weight item_cost \n");
	for(int i=0;i<n;i++){
		scanf("%d %d",&items[i].wt,&items[i].cost);
	}
	int Bag_weight;
	printf("Enter Bag Max_weight : ");
	scanf("%d",&Bag_weight);
	printf("%d\n",KnapSack(items,Bag_weight,n) );

}
