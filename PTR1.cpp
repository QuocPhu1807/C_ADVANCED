#include<stdio.h>
#include<stdlib.h>
void ageFun(int age) {
	printf("Your age :%d", age);
}
int main() {
	int age;
	void(*ptrFun)(int);
	printf("Enter age:\n");
	scanf_s("%d", &age);
	ptrFun = &ageFun;// ptrFun=ageFun
	(*ptrFun)(age);
	//ageFun(age);
	return 0;
}