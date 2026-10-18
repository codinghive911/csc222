#include <iostream>
using namespace std;

struct Car{
	std::string model;
	int year;
	std::string color;
};

void printCar(Car car) {
        std::cout << car.model << '\n';
        std::cout << car.year << '\n'; 
        std::cout << car.color << '\n';
};

int main() {

	Car car1;
	car1.model = "BMW i8";
	car1.year = 2017;
	car1.color = "White";

	Car car2;
	car2.model = "Mercedes-AMG GT 4";
	car2.year = 2025;
	car2.color = "Black";

	printCar (car1);
	printCar(car2);
	return 0; 
};
