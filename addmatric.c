#include "addmatric.h"


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

void printMatrix(int A[ROWS][COLS]) //���� �Լ� A�� ���⿡�� A�� �ٸ�����.  
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

