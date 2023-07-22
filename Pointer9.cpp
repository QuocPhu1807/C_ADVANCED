#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void swap(int* ptr1, int* ptr2) {
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
void reverseArriterace(int* ptr, int size) {
	int i;
	for (i = 0; i < 2; i++) {
		swap(&ptr[i], &ptr[size - 1 - i]);
		// swap ptr+i, ptr+ size-1-i
	}
}
void reverseArrrecursion(int* ptr, int size)
{
	if (size > 1) {
		swap(&ptr[0], &ptr[size - 1]);
		// swap ptr+0, ptr+size-1
		reverseArrrecursion(ptr + 1, size - 1);
	}
}
int main() {
	int grades[SIZE] = { 1, 3, 4, 2, 0 };
	printArr(grades, SIZE);
	reverseArriterace(grades, SIZE);
	printArr(grades, SIZE);
	return 0;
}