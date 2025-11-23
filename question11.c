/* Question 11: String length without strlen */

#include <stdio.h>

int main(void) {
    char str[100];
    int len = 0;
    printf("Enter string (no spaces): ");
    scanf("%s", str);
    while (str[len] != '\0') len++;
    printf("Length: %d\n", len);
    return 0;
}
