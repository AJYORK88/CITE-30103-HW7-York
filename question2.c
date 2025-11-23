/* Question 2: Max of 3 ints without logical ops */

#include <stdio.h>
#include <stdlib.h>

// Use abs for max without &&/||
int max3(int a, int b, int c) {
    int m1 = a > b ? a : b;
    int m2 = m1 > c ? m1 : c;
    return m2;
}

int main(void) {
    int a, b, c;
    printf("Enter 3 ints: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Max: %d\n", max3(a, b, c));
    return 0;
}
