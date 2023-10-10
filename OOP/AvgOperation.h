#pragma once
#include "Operation.h"
class AvgOperation :
	public Operation
{
public:
	double Invoke(double* array, int size);
};