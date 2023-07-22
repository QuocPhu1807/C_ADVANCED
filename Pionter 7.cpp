#include<stdio.h>
#include<stdlib.h>
int Checkissorted(int *ptr, int size, int *isreallysorted) {
	int i;
	*isreallysorted = 1;
	for ( i = 1; i < size; i++) 
	{
		if (ptr[i] <= ptr[i - 1])// if the element right less than or equals to the element left
			*isreallysorted = 0;
		if (ptr[i] < ptr[i - 1])//if the element right less than  to the element left
		return 0;
	}
	return 1;
}

int checkissortedrecursion(int *ptr, int size, int *isreallysorted) {
	int result;
	if (size == 1) {
		*isreallysorted = 1;
		return 1;
	}
	result = checkissortedrecursion(ptr, size - 1, isreallysorted);
	if (result != 0 && ptr[size - 1] == ptr[size - 2]) 
	{
		*isreallysorted = 0;
	}
	if (result != 0 && ptr[size - 1] < ptr[size - 2]) 
	{
		*isreallysorted = 0;
		return 0;
	}
	return result;
}

int main() {
	int grades[] = {1,2,5,3,10};
	int result;
	int isreallysortedflag;
	result = checkissortedrecursion(grades, 5, &isreallysortedflag);
	if (result == 1)
		printf("The array is really sorted/sorted\n");
	else if (result == 0)
		printf("The array is not sorted\n");
	if (isreallysortedflag == 1)
		printf("The array is really sorted\n");
	else if (isreallysortedflag == 0)
		printf("The array is not really sorted\n");
	return 0;
}