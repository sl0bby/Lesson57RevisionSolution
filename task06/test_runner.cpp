#include "logic.h"

int main() {
	// 2 3 4 6 8 12 16 24
	cout << (count_of_dividers(48) == 8 ? "pass" : "fail") << endl;
	//2 3 4 - base case
	cout << (count_of_dividers(12) == 4 ? "pass" : "fail") << endl;

	//bondaru case
	cout << (count_of_dividers(-5) == 0 ? "pass" : "fail") << endl;
	cout << (count_of_dividers(0) == 0 ? "pass" : "fail") << endl;
	cout << (count_of_dividers(1) == 0 ? "pass" : "fail") << endl;
	cout << (count_of_dividers(2) == 0 ? "pass" : "fail") << endl;
	cout << (count_of_dividers(3) == 0 ? "pass" : "fail") << endl;
	cout << (count_of_dividers(4) == 1 ? "pass" : "fail") << endl;
}