/*
 * Computes the maximum of two values.
 */

#include <stdio.h>

int main(void) {
	char x;   /* first value */
	char y;   /* second value */

    printf("Type 2 characters to compare:\n");
	scanf("%c %c", &x, &y);
	// scanf(" %c", &y);

	if (x > y) printf("%c is greater than %c.\n", x, y);
    if (x < y) printf("%c is not greater than %c. \n", x, y);
    if (x == y) printf("%c and %c are equal.\n", x, y);

	return 0;
}