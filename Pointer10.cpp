#include<stdio.h>
#include<stdlib.h>
const int SIZE = 6;
void printArr(int *ptr, int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf(" %d ", ptr[i]);
	}
	printf("\n");
}
//
void swap(int *ptr1, int *ptr2) {
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
//
void reverseArrinteria(int* ptr, int size)
{
	int i;
	for (i = 0; i < 3; i++) {
		swap(&ptr[i], &ptr[size - 1 - i]);
		//swap ptr + i, ptr + size-1
	}
 }
//
void reverseArrrecursion(int* ptr, int size) {
	if (size > 1) {
		swap(ptr, ptr + size - 1);
		// swap ptr+0, ptr+size-1
		reverseArrrecursion(ptr + 1, size - 2);
	}
}
//
int main() {
	int grades[SIZE] = { 2,4,6,5,3,9 };
	printArr(grades, SIZE);
	//
	/*reverseArrinteria(grades, SIZE);*/
	reverseArrrecursion(grades, SIZE);
	//
	printArr(grades, SIZE);
	return 0;
}