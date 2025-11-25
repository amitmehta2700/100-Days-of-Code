#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        getchar(); 
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);

        int len = 0;
        while (students[i].name[len] != '\0') {
            if (students[i].name[len] == '\n') {
                students[i].name[len] = '\0';
                break;
            }
            len++;
        }

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    printf("Student Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}
