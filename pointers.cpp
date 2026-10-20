#include <iostream>
using namespace std;

int main() {
	int nums[4] = {0, 0, 0, 0};
	nums[0] = 7;
	nums[1] = nums[0] * 2;
	nums[2]++;
	nums[3] -= 60;
	std::cout << nums[0] << ' ' << nums[1] << ' ' << nums[2] << ' ' << nums[3];
	std::cout << std::endl;

	int *ip = nums;
	for (int i = 0; i < 4; i++) {
		std::cout << *(ip++) << ' ';
	}
	std::cout << std::endl;

	int nums2[4] = {1, 2, 42, 8};
	ip  = nums2;
	for (int i = 0; i < 4; i++) {
		std::cout << *(ip++) << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << nums2[i] << ' ';
	}
	std::cout << std::endl;
	return 0;
}
