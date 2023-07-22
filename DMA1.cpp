#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
void printArr(int *ptr, int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("Value elements #%d :%d\n",i+1, ptr[i]);
	}
}
int *CreateArr(int size) {
	int i;
	int* Arr;
	Arr = (int*)malloc(size * sizeof(int));
	if (!Arr)
	{
		printf("You've have got some error when trying to alloctae..Check your memory\n");
		exit(1);
	}
	else
		printf("Enter element value of the Array\n");
	for (i = 0; i < size; i++) {
		printf("Value element #%d:", i + 1);
		scanf_s("%d", &Arr[i]);
	  }
	return Arr;
}
int main() {
	int *arr;
	arr = CreateArr(SIZE);
	//
	printf("\n");
	//
	printArr(arr, SIZE);
	return 0;
}