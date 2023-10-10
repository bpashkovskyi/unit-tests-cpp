#include <iostream>
#include "MinOperation.h"

using namespace std;

int main()
{
	double array[] = { 1, 2, 3, 4, 5 };

	MinOperation minOperation;
	double minElement = minOperation.Invoke(array, 5);

	cout << minElement << endl;
}

