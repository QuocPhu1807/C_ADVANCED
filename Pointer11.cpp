#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void printvalueArray(int* ptr, int size) {
	int i, j;
	int leftFlag;
	int countValue;

	for (i = 0; i < size; i++) {
		countValue = 1;
		leftFlag = 0;

		for (j = 0; j < i; j++) {
			if (ptr[i] == ptr[j]) {
				leftFlag = 1;
				break;
			}
		}
		if (leftFlag == 1)
			continue;

		// Right Part
		for (j = i + 1; j < size; j++) {
			if(ptr[i]==ptr[j])
			countValue++;
		}
		printf("Frequency for the element %d:%d\n", ptr[i], countValue);
	}
}
int main() {
	int grades[SIZE] = { 5,6,7,6,5 };
	printvalueArray(grades, 5);
	return 0;
}