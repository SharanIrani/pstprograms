#include <stdio.h>

void main() {
    int radius;
    float PI = 3.14, area, circum;

    printf("\nEnter the Radius Of Circle :\n");
    scanf("%d", &radius);

    area = PI * radius * radius;
    circum = 2 * PI * radius;

    printf("\nArea of circle is : %f", area);  
    printf("\nCircumference of Circle is : %f", circum);
}
