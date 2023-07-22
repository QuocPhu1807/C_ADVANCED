#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void swap(int *ptr1, int *ptr2) {
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
void printArr(int* ptr, int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf(" %d ", ptr[i]);
	}
	printf("\n");
}
void swapArrayON(int* a1, int* a2, int size) {
	int i;
	for (i = 0; i < SIZE; i++)
		swap(&a1[i], &a2[i]);
}
int main() {
	int arr1[SIZE] = { 1,3,6,8,10 };
	int arr2[SIZE] = { 2,2,4,11,17 };
	printf("Value array before swap\n");
	printArr(arr1, SIZE);
	printArr(arr2, SIZE);
	swapArrayON(arr1, arr2);
	printf("\n");
	printf("Value array after swap\n");
	printArr(arr1, SIZE);
	printArr(arr2, SIZE);
	return 0;
}