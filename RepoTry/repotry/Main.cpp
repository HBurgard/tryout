#include "A.h"
#include <iostream>

int main(){
	int * pInt = new int(4);
	A * a = new A();
	a->foo(pInt);

	std::cout << *pInt << std::endl;

	return 0;
}