#include<stdio.h>
#include<stdlib.h>

int Han_XIn_4() {

	char sign = 'X';
	char sign2 = '-';

	printf("(4) \n");
	int a = 0;
	int b = 9;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 0)
				printf("%c", sign);
			while (i > 0 && i <= 4) {
				if (j == a || j == b)
					printf("%c", sign);
				else
					printf("%c", sign2);
				break;
			}
			if (i > 4)
				printf("%c", sign2);
		}
		a += 1; b -= 1;
		printf("\n");
	}
}