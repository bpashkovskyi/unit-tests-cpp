#include "MaxOperation.h"

double MaxOperation::Invoke(double* array, int size) {
	double max = array[0];

	for (int i = 0; i < size; i++) {
		if (max < array[i]) {
			max = array[i];
		}
	}

	return max;
}
