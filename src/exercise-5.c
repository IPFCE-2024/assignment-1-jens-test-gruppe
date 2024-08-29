#include <stdio.h>

int main() {

    printf("Type two integers to be added:\n");
    int x, y;
    scanf("%d%d", &x, &y);
    int sum = x + y;
    printf("the sum is (%d)\n", sum);

    return 0;
}
