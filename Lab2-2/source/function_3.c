#include<stdio.h>
#include<stdlib.h>

int Han_XIn_3() {

	char sign = 'X';
	char sign2 = '-';

	printf("(3) \n");
	int a = 4;
	int b = 5;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			while (i <= 3) {
				if (j == a || j == b)
					printf("%c", sign);
				else
					printf("%c", sign2);
				break;
			}
			if (i == 4)
				printf("%c", sign);
			if (i > 4)
				printf("%c", sign2);
		}
		b += 1; a -= 1;
		printf("\n");
	}
}