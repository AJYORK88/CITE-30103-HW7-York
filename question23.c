/* Question 23: Dynamic array, compute average, free memory */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i;
    float sum = 0.0, avg;
    
    printf("Enter number of integers: ");
    scanf("%d", &n);
    
    // Dynamic allocation
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    avg = sum / n;
    printf("Average: %.2f\n", avg);
    
    free(arr);  // Release memory
    return 0;
}
