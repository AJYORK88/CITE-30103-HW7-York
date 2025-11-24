/* Question 14: Concat two strings without strcat */

#include <stdio.h>

int main(void) {
    char s1[100], s2[100];
    int i = 0, j = 0;
    
    printf("Enter two strings (no spaces): ");
    scanf("%s %s", s1, s2);
    
    while (s1[i] != '\0') i++;
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    
    printf("Concat: %s\n", s1);
    return 0;
}
