/* Question 7: Max/min in array of 10 ints */

#include <stdio.h>

int main(void) {
    int arr[10], i, max, min;
    printf("Enter 10 ints: ");
    for (i = 0; i < 10; i++) scanf("%d", &arr[i]);
    max = min = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Largest: %d\nSmallest: %d\n", max, min);
    return 0;
}
