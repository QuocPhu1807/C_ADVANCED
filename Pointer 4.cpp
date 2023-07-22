#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
void inputArray(int* ptr, int size) {
	for (int i = 0; i < size; i++) {
		printf("Enter value #%d:\n", i + 1);
		scanf_s("%d",&ptr[i]);
	}
}
void displayArray(int* ptr, int size) {
	for (int i = 0; i < size; i++) {
		printf(" Value #%d:%d\n", i + 1, ptr[i]);
	}
}
int main() {
	int grades[SIZE];
	inputArray(grades, 4);
	// printf in screen
	displayArray(grades, 4);
	return 0;
}