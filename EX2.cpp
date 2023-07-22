#include<stdio.h>
#include<stdlib.h>

typedef struct point{
	int x;
	int y;
}Point;

int main() {
	Point pointArrays[5];
	int i;


	for (i = 0; i < 5; i++);
	{
		printf("Enter value point #%d coordinate:",i+1);
		scanf_s("%d", &pointArrays[i].x);
		printf("Enter value  point #%d coordinate:",i+1);
		scanf_s("%d", &pointArrays[i].y);
	}
	printf("-----\n");
	for (i = 0; i < 5; i++) {
		printf("Point %d =(%d,%d)", i + 1, pointArrays[i].x, pointArrays[i].y);
	}
	return 0;
}