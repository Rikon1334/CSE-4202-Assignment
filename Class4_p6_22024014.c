

#include <stdio.h>

int main()
{
    int array[3][2] = { {45, 5}, {17, 8}, {78, 25} };  // Declaring and initializing 2D array

    // Printing the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d  ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
