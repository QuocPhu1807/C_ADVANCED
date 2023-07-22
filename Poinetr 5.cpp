#include<stdio.h>
#include<stdlib.h>
void updateAverage(int* ptr1, int* ptr2, float *aver) {
	*aver = (float)(*ptr1 + *ptr2) / 2;
	
}
int main() {
	int a, b;
	float average;
	printf("Enter value of variable a:");
	scanf_s("%d", &a);
	printf("Enter value of variable b:");
	scanf_s("%d", &b);
	//
	updateAverage(&a, &b, &average);
	printf("Value average:%f", average);
	return 0;
}