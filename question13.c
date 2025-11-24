/* Question 13: Count vowels, consonants, digits */

#include <stdio.h>
#include <ctype.h>    // Added for tolower()

int main(void) {
    char str[101];
    int v = 0, c = 0, d = 0, i = 0;
    printf("Enter line (up to 100 chars): ");
    fgets(str, 101, stdin);
    
    while (str[i] != '\0') {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') v++;
        else if (ch >= 'a' && ch <= 'z') c++;
        else if (ch >= '0' && ch <= '9') d++;
        i++;
    }
    printf("Vowels: %d\nConsonants: %d\nDigits: %d\n", v, c, d);
    return 0;
}
