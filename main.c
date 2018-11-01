#include <stdio.h>
#include <stdlib.h>
#define N_SORT 5

int main(void)
{	
 
	int i;
	int nums[N_SORTS];
	
	printf("input %i numbers :", N_SORTS);
	for(i=0; i<N_SORT; i++)
	{
		scanf("%d",&nums[i]);
	 } 
	
	
	//sorintf function
	//bubbleSort();
	
	printf("sorted numbers are : ");
	for(i=0;i<N_SORT; i++)
	{
		printf("%d", nums[i]);
	}
	
	 return 0;
}








