#include<stdio.h>

void main() {
    int num, fact = 1, i;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        fact = fact * i;
    }

    printf("\nFactorial of %d is: %d\n", num, fact);
}
