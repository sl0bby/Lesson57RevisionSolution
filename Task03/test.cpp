﻿#include "test.h"

// Данный список тестов проверяет функцию is_digits_count_odd и охватывает 
// классы эквивалентности и граничные значения, включая нулевое значение, 
// минимальное и максимальное long long, а также числа с чётным и нечётным 
// количеством цифр.


// Тестовые случаи классов эквивалентности (equivalence classes)

// 9 digits (9 цифр) 
void test01() {
	long long number = 123456789;
	bool expected = true;
	print_test(number, expected, "test01");
}

// 8 digits (8 цифр)
void test02() {
	long long number = 12345678;
	bool expected = false;
	print_test(number, expected, "test02");
}

// 5 digits (5 цифр)
void test03() {
	long long number = -12345;
	bool expected = true;
	print_test(number, expected, "test03");
}

// 4 digits (4 цифры)
void test04() {
	long long number = -1234;
	bool expected = false;
	print_test(number, expected, "test04");
}

// 10 digits (10 цифр)
void test05() {
	long long number = 1000000000;
	bool expected = false;
	print_test(number, expected, "test05");
}


// Тестовые случаи граничных значений (boundary values)


// 4^0 = 1 (минимальная степень)
void test06() {
	long long number = 0;
	bool expected = true;
	print_test(number, expected, "test06");
}

// only one digit (число состоит из одной цифры)
void test07() {
	long long number = 9;
	bool expected = true;
	print_test(number, expected, "test07");
}

// only two digits (число состоит из двух цифр)
void test08() {
	long long number = 10;
	bool expected = false;
	print_test(number, expected, "test08");
}

// only three digits (число состоит из трёх цифр)
void test09() {
	long long number = 999;
	bool expected = true;
	print_test(number, expected, "test09");
}

// only four digits (число состоит из четырёх цифр)
void test10() {
	long long number = -9999;
	bool expected = false;
	print_test(number, expected, "test10");
}

// max long long type number (максимальное значение типа long long)
void test11() {
	long long number = 9223372036854775807LL;
	bool expected = true;
	print_test(number, expected, "test11");
}

// min long long type number (минимальное значение типа long long)
void test12() {
	long long number = -1 * 9223372036854775808LL;
	bool expected = true;
	print_test(number, expected, "test12");
}
