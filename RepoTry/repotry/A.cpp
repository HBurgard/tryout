#include "A.h"
#include <iostream>

A::A()
{
	pAnyInt = new int (0);
}

void A::foo(int * _i)
{
	std::cout << "pAnyInt now points to value: " << *_i << std::endl;
	pAnyInt = _i;
}