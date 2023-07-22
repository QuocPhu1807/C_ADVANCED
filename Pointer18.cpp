#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int maxAdjacentsum(int* ptr, int size) {
	int sumcurrent;
	int maxsumsofar;
	if (size == 2) 
		return ptr[0] + ptr[1];
	sumcurrent = ptr[0] + ptr[1];
	maxsumsofar = maxAdjacentsum(ptr + 1, size - 1);
	if (maxsumsofar > sumcurrent)
		return maxsumsofar;
	else
		return sumcurrent;
}
int main() {
	int grades[SIZE] = { 1,2,4,3,1 };
	int result;
	result = maxAdjacentsum(grades, 5);
	printf("Max value twoAjacentsum:%d", result);
	return 0;
}