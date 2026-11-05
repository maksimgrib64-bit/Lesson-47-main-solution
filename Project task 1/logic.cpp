#include "logic.h"
int count_great_elements(int* array, int size, int n) {
	int count = 0;
	for (int i = 0; i < size; ++i) {
		if (array[i] > n) {
			count++;
		}
	} 
	return count;
}