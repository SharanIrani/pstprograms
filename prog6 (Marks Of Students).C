#include <stdio.h>

void main() {
    float percent;

    printf("\nEnter percentage of Student: ");
    scanf("%f", &percent);

    if (percent >= 75)
        printf("Scored First Class with distinction\n");
    else if (percent >= 60)
        printf("Scored First Class\n");
    else if (percent >= 50)
        printf("Scored Second class\n");
    else if (percent >= 35)
        printf("Scored Third Class\n");
    else
        printf("Failed. Need to Improve\n");
}
