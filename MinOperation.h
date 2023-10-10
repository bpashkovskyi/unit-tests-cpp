#pragma once
#include "Operation.h"
class MinOperation :
	public Operation
{
public:
	double Invoke(double* array, int size);
};

