#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student topStudent(struct Student students[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return students[maxIndex];
}

int main() {
    int n = 5;
    struct Student students[n];

    for (int i = 0; i < n; i++) {
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

    struct Student top = topStudent(students, n);

    printf("Top Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
