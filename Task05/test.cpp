#include "test.h"


void test01() {
	int arr[] = { 0 };
	long long expected = 0;
	print_test(arr, expected, 0, "test01");
}

void test02() {
	int arr[] = { 1,2,3,4 };
	long long expected = 0;
	print_test(arr, expected, 4, "test02");
}

void test03() {
	int arr[] = { -1,-2,-3 };
	long long expected = 6;
	print_test(arr, expected, 3, "test03");
}
void test04() {
	int arr[] = { -19,-10 };
	long long expected = 29;
	print_test(arr, expected, 2, "test04");
}
void test05() {
	int arr[] = { -1, 5, -3, 0 };
	long long expected = 4;
	print_test(arr, expected, 4, "test05");
}


