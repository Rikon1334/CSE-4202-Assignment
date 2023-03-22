#include <stdio.h>

// Structure for storing distances in feet and inches
struct distance {
    int feet;
    int inches;
};

int main() {
    // Declare the variables
    struct distance r1, r2, result;

    // Prompting the user to enter 1st distance
    printf("Enter 1st distance (feet inches): ");
    scanf("%d %d", &r1.feet, &r1.inches);

    // Prompting the user to enter 2nd distance
    printf("Enter 2nd distance (feet inches): ");
    scanf("%d %d", &r2.feet, &r2.inches);

    // summation of the distances
    result.feet = r1.feet + r2.feet;
    result.inches = r1.inches + r2.inches;

    // Check if inches is less than 13, if yes, modify feet and inches value
    if (result.inches > 13) {
        result.feet += result.inches / 12;
        result.inches = result.inches % 12;
    }

    // Print the distances and the result
    printf("1st distance: %d feet %d inches\n", r1.feet, r1.inches);
    printf("2nd distance: %d feet %d inches\n", r2.feet, r2.inches);
    printf("Sum of distances: %d feet %d inches\n", result.feet, result.inches);

    return 0;
}
