#include <stdio.h>

void main() {
    char ch[100];
    int i, alpha_count = 0, digit_count = 0, vowel_count = 0, consonant_count = 0, space_count = 0;
    int splchar_count = 0;

    printf("\nEnter a String : ");
    gets(ch);

    for (i = 0; ch[i] != '\0'; i++) {
        if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z')) {
            alpha_count++;
            if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' ||
                ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U') {
                vowel_count++;
            } else {
                consonant_count++;
            }
        } else if (ch[i] >= '0' && ch[i] <= '9') {
            digit_count++;
        } else if (ch[i] == ' ') {
            space_count++;
        } else {
            splchar_count++;
        }
    }

    printf("\nNo of Alphabets is \t\t : %d", alpha_count);
    printf("\nNo of Digits is \t\t\t : %d", digit_count);
    printf("\nNo of Vowels is \t\t\t : %d", vowel_count);
    printf("\nNo of Consonants is \t\t : %d", consonant_count);
    printf("\nNo of Spaces is \t\t\t : %d", space_count);
    printf("\nNo of Special Characters is \t : %d", splchar_count);
}


