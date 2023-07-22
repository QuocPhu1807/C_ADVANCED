#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int printarr(int* ptr, int size) {
	if (size == 1) {
		printf("%d", ptr[0]);
		return 1;
	}
	int result=printarr(ptr + 1, size - 1);
	if (result == 1)
		printf("%d", ptr[0]);
	else
		return 0;
}
//
int printArr1(int* ptr, int size) {
	if (size ==0) {
		return 1;
	}
	int result = printArr1(ptr, size - 1);
	if (result == 1)
		printf("%d", ptr[size - 1]);
	else
		return 0;
}
//
int main() {
	int grades[SIZE] = { 1,3,2,4 };
	for (int i = 0; i < 4; i++) {
		printf("Element values of the Grades before cursion %d\n", grades[i]);
	}
	printf("Element Values of Grades1:");
	printArr1(grades, SIZE);
	//
	printf("\n");
	//
	printf("Element Values of Grades2:");
	printarr(grades, SIZE);
	return 0;
}