#include "MinOperation.h"
#include <stdexcept>

double MinOperation::Invoke(double* array, int size) {
	if (size == 0) {
		throw std::invalid_argument("Size can't be zero");
	}
	
	double min = array[0];

	for (int i = 0; i < size; i++) {
		if (min > array[i]) {
			min = array[i];
		}
	}

	return min;
}
