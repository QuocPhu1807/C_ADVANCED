#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void swap(int* ptr1, int* ptr2) {
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
void swapArrOn(int* arr1, int* arr2) {
	int i;
	for (i = 0; i < SIZE; i++) {
		swap(&arr1[i], &arr2[i]);
		// swap arr1+i,arr2 +i
	}
}
//
void swapArr01(int **ptr1, int **ptr2) {
	int *temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = *ptr1;
}
//
void printArr(int **ptr, int size) {
	int i;
	for (i = 0; i < SIZE; i++) {
		printf("%d ", *ptr[i]);
	}
	printf("\n");
}
int* generateArr(int size) {
	int i;
	int *arr = (int*)malloc(size * sizeof(int));

	for (i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
	}
	return arr;
}

int main() {
	int sizeArr1, sizeArr2;
	int* Arr1, * Arr2;
	//
	printf("Enter amount element of Arr1:");
	scanf_s("%d", &sizeArr1);
	printf("Value element of Arr1:\n ");
	Arr1 = generateArr(SIZE);
	//
	printf("Enter value of Arr1:");
	scanf_s("%d", &sizeArr2);
	printf("Value element of Arr1:\n ");
	Arr2 = generateArr(SIZE);
	//
	printf("Value element before swap\n");
	printArr(&Arr1, SIZE);
	printArr(&Arr2, SIZE);
//	//
//	swapArrOn(Arr1, Arr2);
//	//
//	printf("Value element after swap\n");
//	printArr(Arr1, SIZE);
//	printArr(Arr2, SIZE);
	return 0;
}