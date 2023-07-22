#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void inputArr(int* ptr, int size) {
	for (int i = 0; i < size; i++) {
		printf("Enter value element #%d:", i + 1);
		scanf_s("%d", &ptr[i]);
	}
	printf("\n");
}
// Enetr value element
void printArr(int *ptr, int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("Value element #%d:", i + 1, ptr[i]);
	}
	printf("\n");
}
// Printf value element
int *Array(int* temp, int totalsize) {
	int *numbers;
	numbers = (int*)malloc(totalsize * sizeof(int));
	if (!numbers)// numbers==NULL
	{
		printf("Allocating failed..\n");
		 exit(1);
	}
	//
	inputArr(numbers, totalsize);
	int i;
	if (numbers[i] == -1) {
		printf("sisze of Array :%d", totalsize);
		return numbers;

	}
	memcpy(temp, numbers, totalsize * sizeof(int));
	free(numbers);
}

int main() {
	int *Arr;
	int totalsize;
	//
	printf("Enter total element of Array");
	scanf_s("%d", &totalsize);
	//
	int *ptr = (int*)malloc(totalsize * sizeof(int));
	Arr = (int*)Array(ptr, totalsize);
	printArr(Arr, totalsize);
	return 0;
}