#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
void printArr(int* ptr, int size) {
	if (size > 0) 
	{
		printf("%d", ptr[0]);
		printArr(ptr + 1, size - 1);
	}
}
//
void printreverseArr1(int* ptr, int size) {
	if (size > 0)
	{
		printf("%d", ptr[size - 1]);
		printreverseArr1(ptr, size - 1);
	}
}
//
void printreverseArr2(int* ptr, int size) {
	if (size > 0)
	{
		printreverseArr2(ptr+1, size - 1);
		printf("%d", ptr[0]);
	}
}
//
int main() {
	int grades[SIZE] = { 1,3,2,4 };
	printArr(grades, SIZE);
	printf("\n");
	printreverseArr2(grades, SIZE);
	return 0;
}