#include <iostream>

void wont_swap(int a, int b) {
	std::cout << "a: " << a << " b: " << b << std::endl;
	std::cout << "Address of a: " << long(&a) << std::endl;
	std::cout << "Address of b: " << long(&b) << std::endl;
	int temp = a;
	a = b;
	b = temp;
	std::cout << "a: " << a << " b: " << b << std::endl;
}

void will_swap (int& a, int& b) {
	std::cout << "a: " << a << " b: " << b << std::endl;
	std::cout << "Address of a: " << long(&a) << std::endl;
	std::cout << "address of b: " << long(&b) << std::endl;
	int temp = a;
	a = b;
	b = temp;
	std::cout << "a: " << a << " b: " << b << std::endl;
}

int main() {
	int x = 7;
	int y = 11;
	
	std::cout << "x: " << x << " y: " << y << std::endl;
	std::cout << "Address of x: " << long(&x) << std::endl;
	std::cout << "Address of y: " << long(&y) << std::endl;

	std::cout << "Calling wont_swap.." << std::endl;
	wont_swap(x, y);
	std::cout << "x: " << x << " y: " << y << std::endl;

	std::cout << "Calling will_swap.." << std::endl;
	will_swap(x, y);
	std::cout << "x: " << x << " y: " << y << std::endl;

	return 0;
}
