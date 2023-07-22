#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int *Array(int *ptr, int size) {
	int i;
	printf("Enter Element Values:\n");
	for (i = 0; i < size; i++) {
		printf("Enter Values #%d:\n", i + 1);
		scanf_s("%d", &ptr[i]);
	}
	printf("\n");
	return ptr;
}
//
void printArr(int *ptr, int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("Value element #%d: %d \n", i + 1, ptr[i]);
	}
}
//
int main() {
	int grades[SIZE];
	int *arr;
	arr = Array(grades,SIZE);
	printArr(grades, SIZE);
	return 0;
}