/* Question 6: Sum and average of n ints in array */

#include <stdio.h>

int main(void) {
    int n, i, sum = 0;
    float avg;
    printf("Enter n (max 100): ");
    scanf("%d", &n);
    int arr[100];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum / n;
    printf("Sum: %d\nAverage: %.2f\n", sum, avg);
    return 0;
}
