#include<stdio.h>
#include<stdlib.h>

int main() 
{
	int num1, num2;
	float average;
	printf("Enter num 1:");
	scanf_s("%d", &num1);
	printf("Enter num 2:");
	scanf_s("%d", &num2);
	average = (float)(num1 + num2) / 2;
	printf("Average = %f \n", average);
	return 0;
}