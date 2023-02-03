#include <stdio.h>
#define MAX 6

int main()
{
	int array[] = {45, 5,17, 8,78,25};
	int i, max, min, max_index, min_index;

	max = array[0];
	min = array[0];
	max_index = 0;
	min_index = 0;

	for (i = 0; i < MAX; i++) {

		// If current element is greater
		// than max
		if (array[i] > max) {
			max = array[i];
			max_index = i;
		}

		// If current element is smaller
		// than min
		if (array[i] < min) {
			min = array[i];
			min_index = i;
		}
	}

	printf("Largest element is %d at index %d\n",
		max, max_index);
	printf("Smallest element is %d at index %d\n",
		min, min_index);

	return 0;
}
