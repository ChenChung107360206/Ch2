#include<stdio.h>
#include<stdlib.h>

int Han_XIn_1() {

	char sign = 'X';
	char sign2 = '-';

	printf("(1) \n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 0 || i == 9 || j == 0 || j == 9)
				printf("%c", sign);
			else
				printf("%c", sign2);
		}
		printf("\n");
	}
}