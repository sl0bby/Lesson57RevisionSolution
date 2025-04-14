﻿#include "test.h"

// Данный список тестов проверяет функцию get_tribonacci_number и охватывает
// классы эквивалентности и граничные значения. Они включают крайние 
// случаи, отрицательные индексы, большие индексы и проверку правильности расчётов.


// Тестовые случаи Классов эквивалентности / Equivalence classes


// tribonacci(5) = 0 + 1 + 1 = 2
void test01() {
	int index = 5;
	long long expected = 2;
	print_test(index, expected, "test01");
}

// tribonacci(6) = 1 + 1 + 2 = 4
void test02() {
	int index = 6;
	long long expected = 4;
	print_test(index, expected, "test02");
}

// tribonacci(7) = 1 + 2 + 4 = 7
void test03() {
	int index = 7;
	long long expected = 7;
	print_test(index, expected, "test03");
}


// Тестовые случаи Граничных значений / Boundary values


// base case: 1st tribonacci number (базовый случай: 1-й член последовательности)
void test04() {
	int index = 1;
	long long expected = 0;
	print_test(index, expected, "test04");
}

// base case: 2nd tribonacci number (базовый случай: 2-й член последовательности)
void test05() {
	int index = 2;
	long long expected = 0;
	print_test(index, expected, "test05");
}

// base case: 3rd tribonacci number (базовый случай: 3-й член последовательности)
void test06() {
	int index = 3;
	long long expected = 1;
	print_test(index, expected, "test06");
}

// first computed tribonacci number (проверка первого вычисляемого числа)
void test07() {
	int index = 4;
	long long expected = 1;	// 0 + 0 + 1
	print_test(index, expected, "test07");
}

// Invalid cases with negative index / Отрицательные индексы (некорректные) 
// expected behavior with negative index (ожидаемое поведение при отрицательных значениях)
void test08() {
	int index = -1;
	long long expected = -1;
	print_test(index, expected, "test08");
}

// should return -1 or handle error (должно возвращать -1 или обработку ошибки)
void test09() {
	int index = -5;
	long long expected = -1;
	print_test(index, expected, "test09");
}

// Large index values / Проверка больших значений
// performance and correctness check (проверка быстродействия и корректности)
void test10() {
	int index = 19;
	long long expected = 10609;
	print_test(index, expected, "test10");
}

// testing larger indices (тест для очень больших индексов)
void test11() {
	int index = 29;
	long long expected = 4700770;
	print_test(index, expected, "test11");
}