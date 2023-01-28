
#include <stdio.h>

int main()
{
    int num;  // Variable to store student's number
    char grade;  // Variable to store student's grade

    printf("Enter the student's number: ");
    scanf("%d", &num);  // Read the student's number from the user

    if (num >= 80 && num <= 100)  // Check if the number is in range 80 - 100
        grade = 'A+';
    else if (num >= 70 && num <= 79)  // Check if the number is in range 70 - 79
        grade = 'A';
    else if (num >= 60 && num <= 69)  // Check if the number is in range 60 - 69
        grade = 'B';
    else if (num >= 50 && num <= 59)  // Check if the number is in range 50 - 59
        grade = 'C';
    else if (num >= 40 && num <= 49)  // Check if the number is in range 40 - 49
        grade = 'D';
    else if (num < 40)  // Check if the number is less than 40
        grade = 'F';

    printf("The grade of the student is: %c", grade);  // Print the grade

    return 0;
}
