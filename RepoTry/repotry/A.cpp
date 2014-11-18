#include "A.h"

A::A()
{
	pAnyInt = new int (0);
}

void A::foo(int * _i)
{
	pAnyInt = _i;
}