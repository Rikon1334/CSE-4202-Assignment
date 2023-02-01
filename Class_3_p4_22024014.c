#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    printf("Numbers between 1 to %d that cannot be divided by 3 are: \n",n);

    //loop to iterate over numbers between 1 and n
    for(i=1; i<=n; i++)
    {
        //check if number is not divisible by 3
        if(i%3!=0)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
