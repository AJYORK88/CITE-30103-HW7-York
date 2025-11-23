/* Question 4: Swap two ints by reference */

#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int a, b;
    printf("Enter two ints: ");
    scanf("%d %d", &a, &b);
    printf("Before: a=%d b=%d\n", a, b);
    swap(&a, &b);
    printf("After: a=%d b=%d\n", a, b);
    return 0;
}
