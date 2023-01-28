
#include <stdio.h>

int main()
{
    int employee_id;
    float basic_salary, overtime_hours, overtime_rate, total_salary;

    printf("Enter employee ID: ");
    scanf("%d", &employee_id);

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    if (basic_salary == 0)
    {
        printf("Basic salary cannot be zero.");
        return 0;
    }

    printf("Enter overtime hours: ");
    scanf("%f", &overtime_hours);

    if (overtime_hours < 0)
    {
        printf("Overtime hours cannot be negative.");
        return 0;
    }

    printf("Enter overtime rate: ");
    scanf("%f", &overtime_rate);

    if (overtime_rate == 0)
    {
        printf("Overtime rate cannot be zero.");
        return 0;
    }

    total_salary = basic_salary + (overtime_hours * overtime_rate);

    printf("\nTotal salary of employee %d is %.2f", employee_id, total_salary);

    return 0;
}
