#include<stdio.h>
#include<stdlib.h>

int findvalueequal(int* ptr, int size) {
	for (int i = 1; i < size-1; i++) {
		if (ptr[i] == ptr[i + 1] + ptr[i - 1])
		{
			printf("%d\n", ptr[i]);
			return 1;
		}
	}
	        return 0;
}
int main() {
	int grades[] = { 1,4,7,3,2 };
	int result;
	result = findvalueequal(grades, 5);
	printf("result=%d", result);
	return 0;
}