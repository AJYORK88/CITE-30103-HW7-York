/* Question 16: Student struct read/print */

#include <stdio.h>
#include <string.h>

struct Student {
    char name[40];
    int roll;
    float marks;
};

int main(void) {
    struct Student s;
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
    return 0;
}
