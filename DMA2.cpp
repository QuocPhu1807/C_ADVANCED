#include<stdio.h>
#include<stdlib.h>
void printArr(int* ptr, int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("value #%d: %d\n", i + 1, ptr[i]);
	}
	printf("\n");
}
int main() {
	int i;
	int *grades = NULL;
	int *temp = NULL;
	int totalgrades;
	printf("Enter total grades:\n");
	scanf_s("%d", &totalgrades);
	grades = (int*)malloc(totalgrades * sizeof(int));
	if (grades == NULL)
	{
		printf("Allocating failed..\n");
		return 1;// exit(1)
	}
	else
	for (i = 0; i < totalgrades; i++) {
		printf("Enter value #%d: ", i + 1);
		scanf_s("%d", &grades[i]);
	}
	printf("\n");
	printArr(grades, totalgrades);
	//
	totalgrades = totalgrades + 2;
	temp = (int*)realloc(grades, totalgrades * sizeof(int));
	if (temp != NULL)
		grades = temp;
	grades[totalgrades - 1] = 100;
	grades[totalgrades - 2] = 90;
	printArr(grades, totalgrades);
	//
	totalgrades = totalgrades -3;
	temp = (int*)realloc(grades, totalgrades * sizeof(int));
	if (temp != NULL)
		grades = temp;
	//
	printArr(grades, totalgrades);
	//
	free(grades);
	grades = NULL;
	return 0;
}