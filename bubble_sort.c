#include <stdio.h>

void bubble_sort(int array[], int size)
{
	for (int i = 0; i < size - 1; ++i) {
		int swapped = 0;

		for (int j = 0; j < size - i - 1; ++j) {
			if (array[j] > array[j + 1]) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
			}
		}

		if (!swapped) {
			break;
		}
	}
}

int main(void)
{
	int array[] = {64, 34, 25, 12, 22, 11, 90};
	int size = (int)(sizeof(array) / sizeof(array[0]));

	bubble_sort(array, size);

	printf("Sorted array: ");
	for (int i = 0; i < size; ++i) {
		printf("%d%s", array[i], i == size - 1 ? "\n" : " ");
	}

	return 0;
}
