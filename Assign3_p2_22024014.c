
//pseudocode
//1. Ask the user to input two numbers - lower and upper bound
//2. Initialize a counter variable, i, to the lower bound number
//3. Initialize a flag variable, prime, to true
//4. Run a while loop while i is less than or equal to the upper bound number
//5. Run a for loop starting from 2 to the value of i
//6. If the remainder of i divided by any number between 2 and i is 0
//7. Set prime to false
//8. If prime is true, print the value of i
//9. Increment i by 1 and repeat the loop

#include <stdio.h>

int main() {
    int lower, upper;
    printf("Please enter the lower bound: ");
    scanf("%d", &lower);
    printf("Please enter the upper bound: ");
    scanf("%d", &upper);

    int i = lower;
    while (i <= upper) {
        int prime = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime == 1) {
            printf("%d is a prime number.\n", i);
        }
        i++;
    }

    return 0;
}
