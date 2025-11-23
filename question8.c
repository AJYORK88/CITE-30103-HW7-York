/* Question 8: Count even/odd in array */

#include <stdio.h>

int main(void) {
    int n, i, even = 0, odd = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even: %d\nOdd: %d\n", even, odd);
    return 0;
}
