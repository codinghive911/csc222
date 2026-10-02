#include <iostream>
#include <string>
using namespace std;

int main()
{
	string fruit = "banana";
	char letter = fruit[0];
	int size = fruit.length();
	char last = fruit[size-1];
	cout << "The first letter in " << fruit << " is " << letter << '.' << endl;
	cout << "The length of fruit is " << size << ", and last letter being " << last << endl;
}
