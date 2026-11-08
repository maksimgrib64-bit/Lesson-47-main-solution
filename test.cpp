#include "test.h"
void test(int* array, int size, int expected, string test_name) {
	int actual = count_even_elements(array, size);
	string msg = test_name + "-->";
	msg += actual == expected ? "Pass" : "Fail";
	cout << msg << endl;
}

void run_all_tests() {
	int array1[]{ 1,2,3,4,5,6,7,8 };
	test(array1, 8, 4, "test01");

	int array2[]{ 1,3,5,7,9 };
	test(array2, 5, 0, "test02");

	int array3[]{2,4,6,8,10};
	test(array3,5, 5, "test03");

	int array4[]{ 0,0,0,0,0 };
	test(array4, 5, 5, "test04");

	int array5[]{ 7};
	test(array5, 1, 0, "test05");

	int array6[]{8};
	test(array6, 1, 1, "test06");
}
