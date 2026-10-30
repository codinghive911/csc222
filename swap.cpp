#include <iostream>

// 1. Classic Swap using a Temporary Variable
// Safe, readable, and the standard approach for almost all data types.
void swapWithTemp(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// 2. Arithmetic Swap (No temporary variable)
// Uses addition and subtraction. Risk of integer overflow in some languages.
void swapArithmetic(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

// 3. Bitwise XOR Swap (No temporary variable)
// Uses the XOR operator. Fast, but only works on integers and fails if swapping a variable with itself.
void swapXOR(int &a, int &b) {
    if (&a != &b) { // Prevent zeroing out if swapping the exact same memory address
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
}

int main() {
    int x = 5, y = 10;

    std::cout << "Original: x = " << x << ", y = " << y << "\n\n";

    // Testing Method 1
    swapWithTemp(x, y);
    std::cout << "After Temp Swap:       x = " << x << ", y = " << y << "\n";

    // Testing Method 2 (Swapping back)
    swapArithmetic(x, y);
    std::cout << "After Arithmetic Swap: x = " << x << ", y = " << y << "\n";

    // Testing Method 3
    swapXOR(x, y);
    std::cout << "After XOR Swap:        x = " << x << ", y = " << y << "\n";

    return 0;
}

