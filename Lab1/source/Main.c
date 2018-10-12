#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int i,j;

	printf("  | ");
	for (int a = 1; a < 10; a++) {
		printf("%3d", a);
	}
	printf("\n------------------------------\n");

	for (i = 1; i < 10; i++) {
		printf("%d | ",i);
		for (j = 1; j < 10; j++) {
			printf("%3d", i*j);
		}			
		printf("\n");
	}

	system("pause");
	return 0;
}