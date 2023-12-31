#include "AvgOperation.h"

double AvgOperation::Invoke(double* array, int size) {
	double sum = 0;

	for (int i = 0; i < size; i++) {
		sum += array[i];
	}

	return sum / size;
}

