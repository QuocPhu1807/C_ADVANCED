#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void printArr(int* ptr, int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("Value element #%d: %d\n", i + 1, ptr[i]);
	}
}
void *myRealloc(void* srcblock, unsigned oldsize, unsigned newsize) {
	int smallsize;
	void *resultArr;
	resultArr = malloc(newsize);
	if (oldsize < newsize)
		smallsize = oldsize;
	else
		smallsize = newsize;
	//
	memcpy(resultArr, srcblock, smallsize);// copy value from array srcblock to array resultArr
	free(srcblock);
	return resultArr;
}
int main() {
	int* numbers;
	int* newnumbers;
	numbers = (int*)malloc(3 * sizeof(int));
	if (!numbers) // numbers==NULL
	{
		printf("Allocating failed..\n");
		return 1;
	}
	numbers[0] = 3;
	numbers[1] = 5;
	numbers[2] = 4;
	printArr(numbers, 3);
	printf("\n");
	//
	newnumbers = (int*)myRealloc(numbers, 3 * sizeof(int), 4 * sizeof(int));
	newnumbers[3] = 12;
	printArr(newnumbers, 4);
	return 0;
}