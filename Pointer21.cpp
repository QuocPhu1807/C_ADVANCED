#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
double findArraverge(int* ptr, int size) {
	double avergsofar;
	if (size == 1)
	{
		return ptr[0];
	}
	avergsofar = findArraverge(ptr + 1, size - 1);
	return (avergsofar * (size - 1) + ptr[0]) / size;
}
//
double findArraverge1(int* ptr, int size) {
	double avergsofar;
	if (size == 1) {
		return ptr[size - 1];
	avergsofar = findArraverge1(ptr, size - 1);
	return (avergsofar * (size - 1) + ptr[size - 1]) / size;
	}
}
//
int main() {
	int grades[SIZE] = { 1,4,3 };
	double result = findArraverge(grades, SIZE);
	printf("Averge value of the array :%lf", result);
	return 0;
}