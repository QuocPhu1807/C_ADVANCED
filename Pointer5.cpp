#include<stdio.h>
#include<stdlib.h>
void minmax(int* ptr, int size, int* minptr, int* maxptr) {
	int i;
	*minptr = ptr[0];
	*maxptr = ptr[0];
	for (i = 0; i < size; i++) {
		if (ptr[i] < *minptr)
		{
			*minptr = ptr[i];
		}
		if (ptr[i] > *maxptr)
		{
			*maxptr = ptr[i];
		}
	}
}
int main() {
	int grades[] = { 20,70,100 };
	int max, min;
	// print min, max value of Array
	minmax(grades, 3, &min, &max);
	printf(" The value max in your grades : %d\n", max);
	printf(" The value min in your grades : %d", min);
	return 0;
}
