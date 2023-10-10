#pragma once
#include "Operation.h"
class MaxOperation :
	public Operation
{
public:
	double Invoke(double* array, int size);
};