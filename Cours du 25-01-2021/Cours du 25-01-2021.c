#include <stdlib.h>
#include <stdio.h>
char x[10];
void main() {
	for (int i = 0;i < 10;i++) {
		if (i != 4) {
			x[i] = '0';
		}
		else {
			x[i] = 'x';
		}
		printf("%c ", x[i]);
	}
	printf("\n");
	system("pause");
	system("cls");
	x[4] = '0';
	x[5] = 'x';
	for (int i = 0;i < 10;i++) {
		printf("%c ", x[i]);
	}
}