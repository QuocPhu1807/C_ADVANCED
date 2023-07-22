#include<stdio.h>
#include<stdlib.h>

void Addtional(int num1, int num2) {
	printf(" %d + %d=%d\n", num1, num2, num1 + num2);
}
//
void Subbtraction(int num1, int num2) {
	printf(" %d - %d=%d\n", num1, num2, num1 - num2);
}
//
void Multiple(int num1, int num2) {
	printf(" %d * %d=%d\n", num1, num2, num1 * num2);
}
//
void Divide(int num1, int num2) {
	if (num2)
		printf(" %d/%d=%d", num1, num2, num1 / num2);
	else
		printf("The value num failed... enter again\n");
}
//
int main() {
	int num1, num2;
	int choice;
	void(*ptrFunc[])(int,int) = { Addtional, Subbtraction, Multiple,Divide };
	printf("Choice:\n0-Addtional \n1-Subbtraction \n2-Multiple \n3-Divide\n Vlaue Choice\n");
	scanf_s("%d", &choice);

	printf("Enter num1:");
	scanf_s("%d",&num1);
	printf("Enter num2:");
	scanf_s("%d",&num2);

	(*ptrFunc[choice])(num1,num2);

	return 0;
}