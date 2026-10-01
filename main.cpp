#include <iostream>
using namespace std;

int f(int a, int b, int c) {
    int total = 0;
    while (--c)
        total += b;
    return total - a;
}

int f(double a, int b, char c) {
    return int(a + b + c);
}

int main() {
    char ch = 3;
    cout << f(2, 3, 4) << f(3.0, 1, ch) << endl;
    return 0;
}
