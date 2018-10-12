#include<stdio.h>
#include<stdlib.h>

int Han_XIn_2() {

	char sign = 'X';
	char sign2 = '-';

	printf("(2) \n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 3 || i == 4 || i == 5 || i == 6) {
				if (j == 3 || j == 4 || j == 5 || j == 6)
					printf("%c", sign2);
				else
					printf("%c", sign);
			}
			else
				printf("%c", sign);
		}
		printf("\n");
	}
}