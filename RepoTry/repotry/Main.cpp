#include "A.h"

int main(){
	int * pInt = new int(4);
	A * a = new A();
	a->foo(pInt);

	return 0;
}