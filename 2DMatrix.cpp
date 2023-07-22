#include<stdio.h>
#include<stdlib.h>
int **allocate2DMatrix(int rows, int colums) {
	int **a;
	int i;
	a =(int**) calloc(rows, sizeof(int*));
	if (!a) return NULL;
	for (i = 0; i < rows; i++) {

		a[i] = (int*)calloc(colums, sizeof(int));
	}
	return a;
}
//
void print2Dmatrix(int** a, int rows, int colums) {
	int i, j;
	printf("Value of the elemnts in 2Dmatrixs");
	for (i = 0; i < rows; i++) {
		for (j = 0; j < colums; j++)
			printf("%d", a[i][j]);

	}
	printf("\n");
}
//
void input2Dmatrix(int** a, int rows, int colums) {
	int i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < colums; j++)
		{
			printf(" a[%d][%d]: ", &i, &j);
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("\n");
}
//
void freeMatrix(int** a,int row) {
	int i;
	for (i = 0; i < row; i++) {
		free(a[i]);
	}
	free(a);
}
//
int main() {
	int **mymatrix;
	int rows, colums;
	//
	printf("Enter the rows of matrix:");
	scanf_s("%d", &rows);
	//
	printf("Enter the colums of array");
	scanf_s("%d", &colums);
	mymatrix = allocate2DMatrix(rows,colums);
	//
	input2Dmatrix(mymatrix, rows, colums);
	//
	print2Dmatrix(mymatrix, rows, colums);
	return 0;
}