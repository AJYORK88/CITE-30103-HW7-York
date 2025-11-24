/* Question 17: 5 students array, tabular print */

#include <stdio.h>
#include <string.h>

struct Student {
    char name[40];
    int roll;
    float marks;
};

int main(void) {
    struct Student s[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Student %d - Name: ", i+1);
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\nTabular:\n");
    printf("%-20s %5s %8s\n", "Name", "Roll", "Marks");
    for (i = 0; i < 5; i++) {
        printf("%-20s %5d %8.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
    return 0;
}
