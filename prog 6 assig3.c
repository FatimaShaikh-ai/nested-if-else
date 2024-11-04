#include<stdio.h>
#include<conio.h>

void calculateGrade(float marks1, float marks2, float marks3) {
    
    float average = (marks1 + marks2 + marks3) / 3;

    
    if (average < 50) {
        printf("Average: %.2f\n", average);
        printf("Result: Fail\n");
    } else {
        if (average > 75) {
            printf("Average: %.2f\n", average);
            printf("Result: A grade\n");
        } else {
            printf("Average: %.2f\n", average);
            printf("Result: B grade\n");
        }
    }
}

int main() {
    float marks1, marks2, marks3;

    
    printf("Enter marks for subject 1: ");
    scanf("%f", &marks1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &marks2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &marks3);

    
    calculateGrade(marks1, marks2, marks3);

    return 0;
}

