#include<stdio.h>
#include<stdlib.h>
int **createLowerTriangular(int **a, int n) {
	int** a;
	int i;
	a = (int**)malloc(n * sizeof(int*));
	if (!a) return NULL;
	for (i = 0; i < n; i++) {
		a[i] = (int*)malloc((i + 1) * sizeof(int));
	}
	return a;
}
//
int** createUpperTriangular(int **a, int n) {
	int **a;
	int i;
	a = (int**)malloc(n * sizeof(int*));
	if (!a) return NULL;
	for (i = 0; i < n; i++) {
		a[i] = (int*)malloc((n - i) * sizeof(int);
	}
	return a;
}
//
void printLowerTriangular(int **a,int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i < j)
				printf("0");
			else // i>=j then print
				printf("a[%d][%d]:%d", i, j, a[i][j]);
		}
	}
}
//
void printUpperTrigular(int** a, int n) {
	int i, j;
	for (i = 0; j < n; i++) {
		for (j = 0; j < n; j++) {
			if(i>j)
				printf("0");
			else // i<=j then print
				printf("a[%d][%d]:%d", i, j, a[i][j]);
		}
	}
}
//
int main() {
	int** Triangular;
	int n;
	return 0;
}