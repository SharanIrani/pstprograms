#include<stdio.h>
#include<string.h>

void main() {
    char s[20], cpy[20], cmp[20], cat[20];
    int value;

    printf("\nEnter a String: ");
    gets(s);

    printf("\nUsing strcat - Length of given string is : %lu", strlen(s));
    printf("\nUsing strcpy - Original String is : %s and Copied String is : %s", s, strcpy(cpy, s));

    printf("\nEnter the String to be Concatenated with %s : ", s);
    gets(cat);
    strcat(s, cat);
    printf("\nUsing strcat - Concatenation of 2 Strings is : %s", s);

    printf("\nEnter the String to be Compared with %s :", cpy);
    gets(cmp);
    value = strcmp(cpy, cmp);

    if (value == 0)
        printf("\nUsing strcmp - Strings are the same!");
    else
        printf("\nUsing strcmp - Strings are not the same!");
}
