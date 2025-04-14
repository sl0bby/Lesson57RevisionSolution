#include "util.h"
#include "logic.h"

void print_test(const int* arr, int expected, int size, string test_name) {
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	long long actual = sum_negative_elements(arr, size);
	bool result = actual == expected;

	SetConsoleTextAttribute(h, (0 | 15));

	if (!result) {
		cout << "sum of negative number: expected = " << expected
			<< ", but actual = " << actual << endl;
	}

	cout << test_name << " --> ";

	string msg;

	if (result) {
		msg = "PASS(green)                   ";
		// background  color
		SetConsoleTextAttribute(h, (((2 << 4) | 15)));
	}
	else {
		msg = "FAIL(red)                     ";
		SetConsoleTextAttribute(h, ((4 << 4) | 15));
	}

	cout << msg << endl;

	SetConsoleTextAttribute(h, (0 | 14));
	cout << "--------------------------------------------------------" << endl;
	SetConsoleTextAttribute(h, (0 | 15));
}