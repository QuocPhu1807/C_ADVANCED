#include<stdio.h>
#include<stdlib.h>
int find2elementoptimized(int *ptr, int size, int val, int *iptr, int *jptr) {
	int i, j;
	int sumcurrent;
	i = 0;
	j = size - 1;
	while (i < j) {
		sumcurrent = ptr[i] + ptr[j];
		if (sumcurrent == val)
		{
			*iptr = i;
			*jptr = j;
			printf("Seccond element ptr[%d] and ptr[%d]:%d \n", i, j, val);
			return 1;
		}
		else if (sumcurrent < val)
			i++;
		else
			j--;
	}
	*iptr = 0;
	*jptr = 0;
	return 0;
}
int main() {
	int grades[7] = { 1,3,4,7,9,10,12 };
	int index1, index2;
	find2elementoptimized(grades, 7, 13, &index1, &index2);
	printf("Index 2 element:%d and %d", index1, index2);
	return 0;
}