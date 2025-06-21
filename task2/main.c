#include <stdio.h>




int main() {
    float salary, bonus_percentage, bonus;

    // Input employee salary and bonus percentage
    printf("Enter employee salary: ");
    scanf("%f", &salary);

    printf("Enter bonus percentage: ");
    scanf("%f", &bonus_percentage);

    // Calculate bonus
    bonus = (bonus_percentage / 100) * salary;

    // Display the bonus
    printf("Employee's Bonus = %.2f\n", bonus);
    system("pause");

    return 0;
}
