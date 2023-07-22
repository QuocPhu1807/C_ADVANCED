#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int isArrAlteratingsign(int *ptr, int size) {
	if (size == 1)
		return 1;
	else if (ptr[size - 1] * ptr[size - 2] >= 0)
		return 0;
	else
		return isArrAlteratingsign(ptr, size - 1);
}
//
int isArrAlteratingsign1(int* ptr, int size) {
	if (size == 1)
		return 1;
	else if (ptr[0] * ptr[1] >= 0)
		return 0;
	else
		return isArrAlteratingsign1(&ptr[1], size - 1);// &ptr[1] = ptr + 1
}
int main() {
	int grades[5] = { 1,-2,4,-3 };
	int result;
	result = isArrAlteratingsign(grades, SIZE);
	if (result == 1)
		printf("every two adjacent elements have the opposite sign");
	else if (result==0)
		printf("at least one pair of ajacent elements with same sign");
	return 0;
}