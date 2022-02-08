#include <iostream>
int Foo(int a) {
	if (a < 1) {
		return 0;
	}
	a--;
	std::cout << a << std::endl;
	return Foo(a);
}

int main()
{
	Foo(5);
}

