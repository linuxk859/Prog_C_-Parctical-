#include <stdio.h>

int main() {
    int age;

    // Input candidate's age
    printf("Enter candidate's age: ");
    scanf("%d", &age);

    // Check eligibility to vote
    if (age >= 18) {
        printf("Candidate is eligible to cast vote.\n");
    } else {
        printf("Candidate is not eligible to cast vote.\n");
    }

    return 0;
}
