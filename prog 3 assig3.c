#include <stdio.h>
#include <conio.h>

int main() {
    int age, weight;

    printf("How old are you? ");
    scanf("%d", &age);

    printf("What is your weight? ");
    scanf("%d", &weight);

    if (age >= 18 && age <= 65) {
        if (weight >= 50) {
            printf("You are eligible for blood donation.");
        } else {
            printf("You are not eligible for blood donation because you weigh less than 50 kg.");
        }
    } else {
        printf("You are not eligible to donate blood due to age restrictions.");
    }

    return 0;
}


