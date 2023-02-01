#include <stdio.h>

int main()
{
    int levels;

    /* Input number of levels from user */
    printf("Enter number of levels: ");
    scanf("%d", &levels);

    /* Iterate through rows */
    for(int i=1; i<=levels; i++)
    {
        /* Iterate through columns */
        for(int j=1; j<=i; j++)
        {
            printf("* ");
        }

        /* Move to the next line */
        printf("\n");
    }

    return 0;
}

