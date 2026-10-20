#include <iostream>
using namespace std;

int main() {
	char letter = 'a';
	char* cp = &letter;
	
	std::cout << "Letter: " << letter << std::endl;
	std::cout << "Address of letter: " << long(&letter) << std::endl;
	std::cout << "Value of pointer to letter: " << long(cp) << std::endl;
	std::cout << "Address of pointer to letter: " << long(&cp) << std::endl;
	std::cout << "Dereferencing the pointer cp gives: " << *cp << std::endl;
}

