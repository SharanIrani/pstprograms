#include <stdio.h>
#include <math.h>

void main() {
    int n, i;
    float marks[30], sum = 0, avg;

    printf("\nEnter the Total Number of Students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter Student %d Marks: ", i + 1);
        scanf("%f", &marks[i]);
        sum = sum + marks[i];
    }

    avg = sum / n;
    printf("Average of Entered marks is: %.2f\n", avg);
}
