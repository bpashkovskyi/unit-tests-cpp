#pragma once
class Operation
{
public:
	virtual double Invoke(double* array, int size) = 0;
};

