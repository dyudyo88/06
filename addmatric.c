#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3



int addMatrix(int A[ROWS][COLS],int B[ROWS][COLS],int C[ROWS][COLS])
{
	int i,j;
	
	for(i=0;i<ROWS; i++)
	{
		for(j=0; j<COLS; j++)
		{
			C[i][j]=A[i][j] + B[i][j];
		}
	 } 
	 
	 return 1;
	
}

void printMatrix(int A[ROWS][COLS]) //위의 함수 A랑 여기에서 A는 다른거임.  
{
	int i,j;
	
	for(i=0;i<ROWS; i++)
	{
		for (j=0; j<COLS; j++)
		{
			printf("%d ", A[i][j]);
		}
		
		printf("\n");
	}
	
	return ;
}

int main(void)
{
	int A[ROWS][COLS]={
	{2,3,0},
	{8,9,1},
	{7,0,5} };
	
	int B[ROWS][COLS]={
	{1,0,0},
	{0,1,0},
	{0,0,1} };
	
	int C[ROWS][COLS];
	
	addMatrix(A,B,C);
	printMatrix(C);
	
	return 0; 
}









