﻿// [The Power of Four]
// Точная степень двойки 
//
// Необходимо разработать рекурсивную функцию, которая проверяет,
// является ли заданное пользователем число точной степенью четвёрки
// или нет. 
// Напомни, что числа 1, 4, 16, 64, … – являются числами точной степени четвёрки,
// а вот числа 2, 6, 8, 10, 12, 14, 18, 20, 22, 24, 26, 28, 30, … – не являются.
// Дополнительно условимся, что все отрицательные числа не является точной
// степенью четвёрки.

#include "logic.h"

bool is_power_of_four(int number) {
	if (number <= 0)
	{
		return false;
	}

	if (number == 1)
	{
		return true;
	}

	if (number % 4 != 0)
	{
		return false;
	}

	return is_power_of_four(number / 4);
	
}
