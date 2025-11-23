/* Question 5: Recursive factorial */

#include <stdio.h>

// Recursive factorial
long factorial(int n) {
    if (n < 0) {
        printf("Error: Negative input\n");
        return -1;
    }
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main(void) {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("%d! = %ld\n", n, factorial(n));
    return 0;
}
