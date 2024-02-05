#include<stdio.h>

void main() {
    int a = 0, b = 1, c, n, i;

    printf("\nEnter the number of terms: ");
    scanf("%d", &n);

    printf("\nFibonacci Series: %d, %d", a, b);

    for (i = 3; i <= n; i++) {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }

    printf("\n");
}
