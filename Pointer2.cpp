#include<stdio.h>
#include<stdlib.h>
float findavergrades(int* ptr, int size) {
	if (size <= 0)
		return -1;
	int i, sum = 0;
	float aver;
	for (i = 0; i < size; i++) {
		sum = sum + ptr[i];
	}
	aver = (float)sum / size;
	return aver;
}
int main() {
	int grades[4] = { 80,85,75,90 };
	int avergrades;
	// avergare array
	avergrades = findavergrades(grades, 4);
	printf("avergrades=%f", (float)avergrades);
}