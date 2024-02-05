#include <stdio.h>

int main() {
    int num, sum = 0, rev = 0, d, x;

    printf("Enter the Number: ");
    scanf("%d", &num);

    x = num;

    while (num != 0) {
        d = num % 10;
        num = num / 10;
        sum = sum + d;
        rev = rev * 10 + d;
    }

    printf("\nSum of digits is = %d", sum);
    printf("\nReverse of number = %d", rev);

    if (x == rev)
        printf("\nThe number is a palindrome\n");
    else
        printf("\nThe number is not a palindrome\n");

    return 0; 
}
