/* Question 22: Print 5-int array using pointer arithmetic only */

#include <stdio.h>

int main(void) {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;   // points to first element
    int i;

    printf("Array elements using pointer arithmetic:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    return 0;
}
