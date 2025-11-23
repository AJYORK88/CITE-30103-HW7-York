/* Question 12: Check palindrome (case sensitive) */

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    int len, i;
    printf("Enter word (no spaces): ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            printf("Not Palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
    return 0;
}
