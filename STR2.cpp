#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* strcat(char* desStr, char* sourceStr) {
	char *concatStr;
	int i;
	int lengdes, lengsource;
	lengdes = strlen(desStr);
	lengsource = strlen(sourceStr);
	//
	concatStr = (char*)malloc(lengdes + lengsource + 1);
	for (i = 0; i < lengdes; i++) {
		concatStr[i] = desStr[i];
	}
	for (i = 0; i < lengsource; i++) {
		concatStr[i + lengdes] = sourceStr[i];
	}
	concatStr[lengdes + lengsource] = '\0';// ky tu dac biet trong chuoi
	return concatStr;
}
//
int main() {
	char desStr[] = "Hello";
	char sourceStr[] = "World";
	char *tempreuslt;
	tempreuslt = strcat(desStr, sourceStr);
	printf("The new strcat of string: %s", tempreuslt);
	return 0;
}