/* Question 15: Count words in line */

#include <stdio.h>

int main(void) {
    char str[101];
    int words = 0, inWord = 0, i = 0;
    printf("Enter line (up to 100 chars): ");
    fgets(str, 101, stdin);
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            inWord = 1;
        } else if (inWord) {
            words++;
            inWord = 0;
        }
        i++;
    }
    if (inWord) words++;
    printf("Words: %d\n", words);
    return 0;
}
