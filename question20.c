/* Question 20: printStudent function */

#include <stdio.h>
#include <string.h>

struct Student {
    char name[40];
    int roll;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name : %s\n", s.name);
    printf("Roll : %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}

int main(void) {
    struct Student s;
    char buffer[100];

    printf("Enter name: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
    strcpy(s.name, buffer);

    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Details ---\n");
    printStudent(s);

    return 0;
}
