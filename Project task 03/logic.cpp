#include "logic.h"
int find_min_index(const int  array[], int size) {
	int min_index = 0;
	for (int i = 1; i < size; ++i) {
		if (array[i] < array[min_index]) {
			min_index = i;
		}
	}
	return min_index;
}

int find_max_index(const int array[], int size) {
	int max_index = 0;
	for (int i = 1; i < size; ++i) {
		if (array[i] > array[max_index]) {
			max_index = i;
		}
	}
	return max_index;
}

void swap_extremes(int array[], int size) {
	if (size < 2) return;

	int min_index = find_min_index(array, size);
	int max_index = find_max_index(array, size);

	int t = array[min_index];
	array[min_index] = array[max_index];
	array[max_index] = t;
}