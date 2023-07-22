#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
void swap(char *ptr1, char *ptr2) {
	char temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
void printArray(char* ptr, int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf(" %c ", ptr[i]);
	}
	printf("\n");
}
void reverseArrIterative(char* ptr, int size) {
		int i;
		for (i = 0; i < size / 2; i++) {
			swap(&ptr[i], &ptr[size - 1 - i]);
			// swap ptr+i, ptr+ size -1-i
		}
}
void reverseArrrecursion(char* ptr, int size) {
	if (size > 1) {
		swap(&ptr[0], &ptr[size - 1]);
		// swap ptr+0, ptr+size-1
		reverseArrrecursion(ptr + 1, size - 2);
	}
}

int main() {
	char grades[SIZE] = { 'a','f','k','d' };
	printArray(grades, SIZE);
	/*reverseArrrecursion(grades, SIZE);*/
	reverseArrIterative(grades, SIZE);
	printArray(grades, SIZE);
	return 0;
}