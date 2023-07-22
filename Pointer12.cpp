#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int findsecondsmallest(int* ptr, int size) {
	int i;
	int num1 = ptr[0];
	int num2 = ptr[0];
	for (i = 1; i < size; i++) {
		if (ptr[i] < num1) {
			num2 = num1;
			num1 = ptr[i];
		}
		else if (ptr[i] < num2) {
			num2 = ptr[i];
		}
	}
	printf("The smallest value: %d\n", num1);
	printf("The second smallest value: %d", num2);
	return num2;
}
int main() {
	int grades[SIZE] = { 5,3,7,4,9 };
	findsecondsmallest(grades, SIZE);
	return 0;
}