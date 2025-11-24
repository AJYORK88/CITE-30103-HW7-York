/* Question 18: Find student with highest marks */

#include <stdio.h>
#include <string.h>

struct Student {
    char name[40];
    int roll;
    float marks;
};

int main(void) {
    struct Student s[5], highest;
    int i;
    char buffer[100];

    printf("Enter data for 5 students:\n");

    for (i = 0; i < 5; i++) {
        printf("Student %d - Name: ", i+1);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';
        strcpy(s[i].name, buffer);

        printf("Roll: ");
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%d", &s[i].roll);

        printf("Marks: ");
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%f", &s[i].marks);
    }

    highest = s[0];
    for (i = 1; i < 5; i++) {
        if (s[i].marks > highest.marks) {
            highest = s[i];
        }
    }

    printf("\nHighest: %s %d %.2f\n", highest.name, highest.roll, highest.marks);
    return 0;
}
