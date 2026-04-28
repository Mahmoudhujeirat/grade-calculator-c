#include <stdio.h>

int main(void) {
    double points;
    double maxPoints;
    double percentage;
    double grade;

    printf("Enter your points: ");
    scanf("%lf", &points);

    printf("Enter maximum points: ");
    scanf("%lf", &maxPoints);

    if (maxPoints <= 0 || points < 0 || points > maxPoints) {
        printf("Invalid input.\n");
        return 1;
    }

    percentage = (points / maxPoints) * 100;

    if (percentage >= 95) grade = 1.0;
    else if (percentage >= 90) grade = 1.3;
    else if (percentage >= 85) grade = 1.7;
    else if (percentage >= 80) grade = 2.0;
    else if (percentage >= 75) grade = 2.3;
    else if (percentage >= 70) grade = 2.7;
    else if (percentage >= 65) grade = 3.0;
    else if (percentage >= 60) grade = 3.3;
    else if (percentage >= 50) grade = 4.0;
    else grade = 5.0;

    printf("\nResult:\n");
    printf("Percentage: %.2f%%\n", percentage);
    printf("German grade: %.1f\n", grade);

    if (grade <= 4.0)
        printf("Status: Passed\n");
    else
        printf("Status: Failed\n");

    return 0;
}