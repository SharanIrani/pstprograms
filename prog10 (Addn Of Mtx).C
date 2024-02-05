#include<stdio.h>

int main() {
    int r, c, i, j, a[10][10], b[10][10], sum[10][10], diff[10][10];

    printf("Enter no of rows and columns of matrices :\n");
    scanf("%d%d", &r, &c);

    printf("Enter elements of 1st matrix :\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of 2nd matrix :\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    printf("Addition of 2 matrices is :\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d\t", sum[i][j]);
        printf("\n");
    }

    printf("Subtraction of 2 matrices is :\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            diff[i][j] = a[i][j] - b[i][j];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d\t", diff[i][j]);
        printf("\n");
    }

    return 0;
}
