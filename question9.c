/* Question 9: Reverse 5 ints in-place */

#include <stdio.h>

int main(void) {
    int arr[5], i;
    printf("Enter 5 ints: ");
    for (i = 0; i < 5; i++) scanf("%d", &arr[i]);
    // Reverse in-place
    for (i = 0; i < 5 / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
    printf("Reversed: ");
    for (i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
