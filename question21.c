/* Question 21: Pointer - value, address, dereference */

#include <stdio.h>

int main(void) {
    int num = 42;
    int *ptr = &num;

    printf("Value of num       : %d\n", num);
    printf("Address of num     : %p\n", (void*)&num);
    printf("Value via pointer  : %d\n", *ptr);
    printf("Address in pointer : %p\n", (void*)ptr);

    return 0;
}
