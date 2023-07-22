#include<stdio.h>
#include<stdlib.h>
void **swapRows(void **a, int row1, int row2) {
	void *temp;
	temp = a[row1];
	a[row1]=a[row2];
	a[row2] = temp;
}
//
void swap(int** a, int colum1, int colum2, int row) {
	int i;
	int temp;
	for (i = 0; i < row; i++) {
		temp = a[i][colum1];
		a[i][colum1] = a[i][colum2];
		a[i][colum2] = temp;
	}
}
//
int main() {

	return 0;
}