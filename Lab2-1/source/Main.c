#include<stdio.h>
#include<stdlib.h>

int main(void) {

	char sign = 'X';
	char sign2 = '-';

	//-------------------------------------------------------------------------------------
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
	//-------------------------------------------------------------------------------------
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
	//-------------------------------------------------------------------------------------
	printf("(3) \n");
	int a = 4, b = 5;
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
			if(i>4)
				printf("%c", sign2);
		}
		b += 1; a -= 1;
		printf("\n");
	}
	//-------------------------------------------------------------------------------------
	printf("(4) \n");
	a = 0, b = 9;
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
	//-------------------------------------------------------------------------------------
	printf("(5) \n");
	a = 0; b = 9;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == a || j == b)
				printf("%c", sign);
			else
				printf("%c", sign2);
		}
		a += 1; b -= 1;
		printf("\n");
	}

	system("pause");
	return 0;
}