#include<stdio.h>
#include<stdlib.h>
void printArr(int* ptr,int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("Value element #%d:%d\n", i + 1, ptr[i]);
	}
}
//
void* myRealloc(void *srcblock, unsigned oldsize, unsigned newsize) {
	int i;
	int *resultArr;
	int smallsize;
	if (oldsize < newsize)
		smallsize = oldsize;
	else
		smallsize = newsize;
	resultArr = (int*)malloc(newsize);
	if (!resultArr) return NULL;
	for (i = 0; i < smallsize; i++) {
		resultArr[i] = ((int*)srcblock)[i];
	}
	free(srcblock);
	return resultArr;
}

int main() {
	int *newnumbers=NULL;
	int *numbers = (int*)malloc(3 * sizeof(int));
	if (!numbers)// numbers == NULL
	{
		printf("Allocating failed..\n");
		return 1;
	}
	numbers[0] = 3;
	numbers[1] = 5;
	numbers[2] = 4;
	newnumbers =(int*)myRealloc(numbers, 3 * sizeof(int), 4 * sizeof(int));
	//
	newnumbers[3] = 9;
	//
	printArr(newnumbers, 4);
	return 0;
}

