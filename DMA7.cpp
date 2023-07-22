#include<stdio.h>
#include<stdlib.h>
void printarr(int *ptr, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("Value elemnt #%d: %d\n", i + 1, ptr[i]);
}
int *adjustableReallocating(int *sizearr)
  {
	int num, latestindex = 0;
	int size = 2;
	int *temp = NULL;
	int *arr = NULL;
	printf("Enter value:");
	scanf_s("%d", &num);
	if (num == -1)
	{
		*sizearr = 0;
		printf("No value");
		return NULL;
	}
	else
		arr = (int*)malloc(size * sizeof(int));
		if (!arr) return NULL;
		while (num != -1) 
	    {
			if (latestindex == size) 
			{
				size = size + 1;
				temp = (int*)realloc(arr, size * sizeof(int));
				if (!temp) return NULL;
				arr = temp;
				if (size == 5)
					break;
			}
			arr[latestindex] = num;
			latestindex++;
			printf("Enter value:");
			scanf_s("%d", &num);
	    }
		if (latestindex = 5)
		*sizearr = latestindex;
		free(temp);
		return arr;
}
int main(){
	int size1;
    int *ARR;
	ARR = adjustableReallocating(&size1);
	printarr(ARR, size1);

	return 0;
}