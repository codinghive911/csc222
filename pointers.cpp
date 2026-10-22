#include <iostream>
using namespace std;

int main()
{
    int* square_numbers = new int[10];
    // set the elements to their square number values
    for (int i = 0; i < 10; i++)
        square_numbers[i] = i * i;
    // print them out 
    for (int i = 0; i < 10; i++)
        cout << square_numbers[i] << ' ';
    cout << endl;
    // print them out another way
    int* ip = square_numbers;
    for (int i = 0; i < 10; i++)
        cout << *ip++ << ' ';
    cout << endl;
    // all done, DON'T FORGET TO FREE THE MEMORY!
    delete[] square_numbers;
    return 0;
}
