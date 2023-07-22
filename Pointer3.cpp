#include<stdio.h>
#include<stdlib.h>
int findsumarr(int* ptr, int size) {
	if (size <= 0)
		return -1;
	int i, sum = 0;
	for (i = 0; i < size; i++) {
		sum = sum + ptr[i];
	}
	return sum;
}
float findaverarr(int *ptr, int size) {
	int averarr;
	averarr = findsumarr( ptr, size);
	return (float)averarr / size;
}
int main()
{
	int grades[4]={ 80,85,72,90 };
	float averages;
	averages = findaverarr(grades, 4);
	printf("averages=%lf",averages);
}