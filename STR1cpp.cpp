#include<stdio.h>
#include<stdlib.h>

char *strcpy(char *destinate, char *source) {
	char *tempPtr;
	int i = 0;
	tempPtr = destinate;
	while (source[i] != '\0') {
		destinate[i] = source[i];
		i++;
	}
	destinate[i] = '\0';
	return tempPtr;
}
//
int main() {
	char myNickName[] = "Alphah";
	char copyofNickName[20];
	char *tempResult;
	tempResult = strcpy( copyofNickName,myNickName);
	printf("The new copied string is: %s\n", tempResult);
	printf("The new copied string is: %s\n", copyofNickName);
	return 0;
}
