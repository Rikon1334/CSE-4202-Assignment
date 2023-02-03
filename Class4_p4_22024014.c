
#include <stdio.h>

int main()
{
  int array[] = {45, 5, 17, 8, 78, 25};
  int n, i, num, location;

  n = sizeof(array)/sizeof(array[0]);

  printf("Enter a number to search\n");
  scanf("%d", &num);

  for (i=0; i<n; i++) {
    if (array[i] == num) {
      location = i + 1;
      break;
    }
  }

  if (location != 0)
    printf("%d is present at location %d.\n", num, location);
  else
    printf("%d is not present in the array.\n", num);

  return 0;
}
