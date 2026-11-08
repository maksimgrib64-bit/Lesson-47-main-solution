#include "logic.h"

int main() {
	int size;
	cout << "Input array size:";
	cin >> size;
	int* array = new int[size];
	
	cout << "Enter " << size << " integers: ";
	for (int i = 0; i < size; ++i) {
		cin >> array[i];
	}
	cout << "\nOriginal array: ";
	for (int i = 0; i < size; ++i) {
		cout << array[i] << " ";
	}
	swap_extremes(array, size);
	cout << "\nModified array: ";
	for (int i = 0; i < size; ++i) {
		cout << array[i] << " ";
	}
	return 0;
}