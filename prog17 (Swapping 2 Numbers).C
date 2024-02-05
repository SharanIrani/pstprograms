#include <stdio.h>

void swapNumbers(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int number1, number2;
    printf("\nEnter the value of number 1 : ");
    scanf("%d", &number1);
    printf("\nEnter the value of number 2 : ");
    scanf("%d", &number2);
    printf("\nBefore Swapping numbers \nNumber 1:%d\tNumber 2 :%d\n", number1, number2);

    swapNumbers(&number1, &number2);

    printf("\nAfter Swapping is \nNumber 1:%d\tNumber 2:%d\n", number1, number2);

    return 0;
}

