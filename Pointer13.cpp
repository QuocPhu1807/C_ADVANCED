#include<stdio.h>
#include<stdlib.h>
const int SIZE = 7;
int findsum2elemet(int* ptr, int size,int val, int *iptr, int *jptr) {
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = i + 1; j < size ; j++)
		{
			int sum = ptr[i] + ptr[j];
			if (sum == val) {
				*iptr = i;
				*jptr = j;
				printf("Second element is ptr[%d]:%d + ptr[%d]:%d=%d\n",i,ptr[i],j,ptr[j], sum);
				return 1;
			}
		}
	}
	*iptr = 0;
	*jptr = 0;
	return 0;
}
int main() {
	int grades[SIZE] = { 1,3,4,7,9,10,12 };
	int result;
	int index1, index2;
	//
	result=findsum2elemet(grades, SIZE,4,&index1, &index2);
	//
	if(result==1)
	printf("There are 2 element with sum equal 4\n");
	printf("index : %d and %d ", index1, index2);
    if(result ==0)
	printf("There are no 2 element with sum equal 13");
	printf("index : %d and %d\n ", index1, index2);
	//
	return 0;
}