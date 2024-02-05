#include <stdio.h>

#define MAX_SIZE 50

int a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][MAX_SIZE], sum[MAX_SIZE][MAX_SIZE];

void addMatrices(int m, int n);
void displayMatrices(int m, int n);
void readElements(int m, int n, int matrix[MAX_SIZE][MAX_SIZE]);

void main() {
    int m, n;
    printf("Enter the order of the matrices: ");
    scanf("%d%d", &m, &n);

    if (m > MAX_SIZE || n > MAX_SIZE) {
        printf("Matrix size exceeds the limit. Please adjust the MAX_SIZE constant.\n");
        return;
    }

    printf("Enter elements of the first matrix:\n");
    readElements(m, n, a);

    printf("Enter elements of the second matrix:\n");
    readElements(m, n, b);

    displayMatrices(m, n);
    addMatrices(m, n);
}

void addMatrices(int m, int n) {
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("\nSum of the given Matrices :\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
}

void displayMatrices(int m, int n) {
    int i, j;
    printf("\nStored matrices are :\n");
    printf("First Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\nSecond Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
}

void readElements(int m, int n, int matrix[MAX_SIZE][MAX_SIZE]) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element at position [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}
