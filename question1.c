/* Question 1: Fahrenheit to Celsius function */

#include <stdio.h>

// Function to convert F to C
float toCelsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main(void) {
    float fahr;
    printf("Enter Fahrenheit: ");
    scanf("%f", &fahr);
    printf("Celsius: %.2f\n", toCelsius(fahr));
    return 0;
}
