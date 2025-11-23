/* Question 10: Add two 3x3 matrices */

#include <stdio.h>

int main(void) {
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("Matrix A:\n");
    for (i = 0; i < 3; i++) for (j = 0; j < 3; j++) scanf("%d", &a[i][j]);
    printf("Matrix B:\n");
    for (i = 0; i < 3; i++) for (j = 0; j < 3; j++) scanf("%d", &b[i][j]);
    // Add
    for (i = 0; i < 3; i++) for (j = 0; j < 3; j++) c[i][j] = a[i][j] + b[i][j];
    printf("Sum Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}
