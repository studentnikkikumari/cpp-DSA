#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define NUM_STUDENTS 5

struct Student {
    int rollno;
    char name[50];
    char phone[15];
    float marks;
};

void saveStudentData(struct Student students[], int count) {
    FILE *fptr;
    fptr = fopen("students.dat", "wb");
    if (fptr == NULL) {
        printf("Error opening file!");
        exit(1);
    }
    fwrite(students, sizeof(struct Student), count, fptr);
    fclose(fptr);
}

void loadStudentData(struct Student students[], int count) {
    FILE *fptr;
    fptr = fopen("students.dat", "rb");
    if (fptr == NULL) {
        printf("Error opening file!");
        exit(1);
    }
    fread(students, sizeof(struct Student), count, fptr);
    fclose(fptr);
}

void displayStudentData(struct Student students[], int count) {
    int i;
    printf("-----------------------------------------------------------------\n");
    printf("| Roll No |         Name         |    Phone Number    |   Marks  |\n");
    printf("-----------------------------------------------------------------\n");
    for (i = 0; i < count; i++) {
        printf("|   %3d   | %-20s | %-15s |  %6.2f |\n", students[i].rollno, students[i].name, students[i].phone, students[i].marks);
    }
    printf("-----------------------------------------------------------------\n");
}

int main() {
    struct Student students[NUM_STUDENTS];
    int i;

     clrscr(); // Clear screen in Turbo C++
    printf("Enter details for %d students:\n", NUM_STUDENTS);
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);
        fflush(stdin); // Clear input buffer
        printf("Name: ");
        gets(students[i].name);
        printf("Phone Number: ");
        gets(students[i].phone);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        fflush(stdin); // Clear input buffer
    }

    saveStudentData(students, NUM_STUDENTS);

    clrscr(); // Clear screen in Turbo C++
    printf("Student data saved successfully!\n\n");

    // Load data from file and display
    loadStudentData(students, NUM_STUDENTS);
    printf("Displaying student data:\n\n");
    displayStudentData(students, NUM_STUDENTS);

    getch(); // Wait for user input before closing
    return 0;
}