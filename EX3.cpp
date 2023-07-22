#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int checkissorted(int* ptr, int size, int* isreallysorted) {
	int i;
	*isreallysorted = 1;
	for (i = 1; i < size; i++) {
		if (ptr[i] <= ptr[i - 1]) {
			*isreallysorted = 0;
		}
		if (ptr[i] < ptr[i - 1]) {
			*isreallysorted = 0;
			return 0;
		}
	}
	return 1;
}
// recursion solutions
int checkissortedrecursion(int *ptr, int size, int *isreallysort) {
	int i;
	int result;
	if (size == 1) {
		*isreallysort = 1;
		return 1;
	}
	result = checkissortedrecursion(ptr, size - 1, isreallysort);
	if (result == 1 && ptr[size - 1] == ptr[size - 2]) {
		*isreallysort = 0;
	}
	if (result == 1 && ptr[size - 1] < ptr[size - 2]) {
		*isreallysort = 0;
		return 0;
	}
	return result;
}
//
int main() {
	int arr[SIZE] = { 1,5,9,7,10 };
	int result;
	int isReallysortedflag;
	//
	result = checkissortedrecursion(arr, SIZE, &isReallysortedflag);
	//
	if (result == 1)
		printf("The array is really sorted/sorted\n");
	else if (result==0)
		printf("The array is no sorted\n");
	//
	if(isReallysortedflag==1)
		printf("The array is really sorted");
	else if (isReallysortedflag==0)
		printf("The array is sorted");
	return 0;
}