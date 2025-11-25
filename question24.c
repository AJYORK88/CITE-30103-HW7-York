/* Question 24: Function pointer to square function */

#include <stdio.h>

// Function that squares a number
int square(int x) {
    return x * x;
}

int main(void) {
    int num;
    // Declare function pointer
    int (*funcPtr)(int) = square;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Square of %d = %d\n", num, funcPtr(num));
    
    return 0;
}
