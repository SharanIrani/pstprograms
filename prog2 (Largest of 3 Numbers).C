#include <stdio.h>

void main() {
    int num1, num2, num3;
    
    printf("\nEnter any 3 numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3)
        printf("%d is the greatest number.\n", num1);
    else if (num2 >= num3)
        printf("%d is the greatest number.\n", num2);
    else
        printf("%d is the greatest number.\n", num3);
}
