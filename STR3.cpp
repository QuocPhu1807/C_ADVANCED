#include<stdio.h>
#include<stdlib.h>
int strcmp(char* str1, char* str2) {
	int i=0;
	int flag = 0;
	while (flag == 0) {
		if (str1[i] < str2[i])
			flag = -1;
		else if (str1[i] > str2[i])
			flag = 1;
		if (str1[i] == '\0')
			break;
		i++;
	}
	return flag;
}
int main() {
	char arr1[] = "Hell5";
	char arr2[] = "Hell";
	int tempresult;
	//
	tempresult = strcmp(arr1, arr2);
	//
	printf("The value compare two array:%d", tempresult);
	return 0;
}