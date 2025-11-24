/* Question 19: Student with nested Date of Birth */

#include <stdio.h>
#include <string.h>

struct Date {
    int day, month, year;
};

struct Student {
    char name[40];
    int roll;
    float marks;
    struct Date dob;
};

int main(void) {
    struct Student s;
    char buffer[100];

    printf("Enter name: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
    strcpy(s.name, buffer);

    printf("Roll: ");
    scanf("%d", &s.roll);
    printf("Marks: ");
    scanf("%f", &s.marks);
    printf("DOB (dd mm yyyy): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("\n--- Student Record ---\n");
    printf("Name : %s\n", s.name);
    printf("Roll : %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    printf("DOB  : %02d/%02d/%d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
