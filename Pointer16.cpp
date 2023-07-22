#include<stdio.h>
#include<stdlib.h>
#define SIZE 6
int isArraypalindmore(int *ptr, int size) {
	if (size <= 1)
		return 1;
	else if (ptr[0] != ptr[size - 1])
		return 0;
	else
	    return isArraypalindmore(ptr + 1, size - 2);
}
int main() {
	int grades[SIZE] = { 9,8,7,6,8,9 };
	int result;
	result = isArraypalindmore(grades,SIZE);
	if (result == 1)
		printf("The array a Palindmore");
	else if(result==0)
		printf("The array no a Palindmore");
	return 0;
}