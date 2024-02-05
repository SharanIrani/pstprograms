#include <stdio.h>
#include <math.h>
//1,-3,2;
//1,2,3;
void main() {
    double a, b, c, discriminant, root1, root2, realpart, imagpart;

    printf("\nEnter coefficients a, b, and c: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Roots are real and different:\n");
        printf("Root1 = %.2lf and Root2 = %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root1 = Root2 = %.2lf\n", root1);
    } else {
        realpart = -b / (2 * a);
        imagpart = sqrt(-discriminant) / (2 * a);

        printf("Roots are not real:\n");
        printf("Root1 = %.2lf + %.2lfi and Root2 = %.2lf - %.2lfi\n", realpart, imagpart, realpart, imagpart);
    }
}
