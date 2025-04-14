#include "logic.h"

int sum_negative_elements(const int* arr, int size) {
	if (size <= 0)
	{
		return 0;
	}

	return (arr[0] < 0 ? abs(arr[0]) : 0) + sum_negative_elements(arr + 1, size - 1);
}