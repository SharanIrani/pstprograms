#include <stdio.h>
#include <math.h>

void main() {
    int a[50], i, j, k, number;

    printf("\nEnter size of Array: ");
    scanf("%d", &number);

    printf("Enter elements of the Array: ");
    for (i = 0; i < number; i++)
        scanf("%d", &a[i]);

    printf("Entered elements are:\n");
    for (i = 0; i < number; i++)
        printf("%d ", a[i]);

    for (i = 0; i < number; i++)
        for (j = i + 1; j < number;) {
            if (a[i] == a[j]) {
                for (k = j; k < number; k++)
                    a[k] = a[k + 1];
                number--;
            } else {
                j++;
            }
        }

    printf("\nArray after deleting the duplicate elements is:\n");
    for (i = 0; i < number; i++)
        printf("%d ", a[i]);
    printf("\n");
}
