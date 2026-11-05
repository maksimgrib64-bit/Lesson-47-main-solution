#include "logic.h"
#define MAX_SIZE 100
int main() {
	int n;
	cout << "Enter number n:";
	cin >> n;

	int size;
	cout << "Input size:";
	cin >> size;
	if (size <= 0 or size > MAX_SIZE) {
		cout << "Size must be between 1 and " << MAX_SIZE << endl;
	}

	int* array = new int[size];
	cout << "Input elements:";
	for (int i = 0; i < size; ++i) cin >> array[i];

	

	int result = count_great_elements(array, size, n);
	cout << "Number of elements strictly greater than " << n << ": " << result << endl;

	return 0;
}