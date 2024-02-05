#include<stdio.h>

void main() {
    char str[100];
    int len = 0;

    printf("\nEnter the String: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    printf("\nThe Length of the String is: %d\n", len);
}
