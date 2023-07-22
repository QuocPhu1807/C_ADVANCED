#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
void swap(char *ptr1, char *ptr2) {
	char temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
void reverseArr(char *ptr, int size) {
	int i;
	for (i = 0; i < size/2; i++) {
		swap(&ptr[i], &ptr[size - 1 - i]);
	}
}
//
void printArr(char *ptr, int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%c\n", ptr[i]);
	}
}
int main() {
	char arr[SIZE] = { 'a','f','k','d'};
	//
	printf("The value of elements in array before reverse\n");
	printArr(arr, SIZE);
	//
	reverseArr(arr, SIZE);
	//
	printf("The value of elements in array after reverse\n");
	printArr(arr, SIZE);
	return 0;
}