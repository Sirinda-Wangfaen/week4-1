#include <stdio.h>

int main() {
	int num, row, col;
	scanf_s("%d", &num);
	if (num > 0) {
		for (row = 1; row <= 2 * num - 1; row++) {
			for (col = 1; col <= 2 * num - 1; col++) {
				if ((col <= row && col + row <= 2 * num) || (row <= col && col + row >= 2 * num)) {
					printf("* ");
				}
				else {
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	else { printf("Error");
	}
	return 0;
}
