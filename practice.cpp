#include <iostream>

int main() {
	int nums[4] = {32, 16, 8, 4};
	int *p1 = nums + 2, *p2 = p1 - 1;
	p1++;
	std::cout << *p1 <<  ' ' << *p2 << ' ' << p1 - p2 << ' ';
	std::cout << *p1 + nums[p1 - p2] << std::endl;
	return 0;
}
