#include <iostream>
using namespace std;

// Demonstrates:
// 1. Initializing a pointer to nullptr
// 2. Getting the address of an object using the & operator.
// 3. Dereferencing a pointer using the * operator
void example1() {
    int a = 1;
    int *ptrA = nullptr; // Declare a pointer. set it to null
    ptrA = &a; // Get the address of a and store it in ptrA
    cout << a << endl;
    *ptrA = 2; // Dereference *ptrA, which will change a's value
    cout << a << endl;
}

// Shows the syntax for using a pointer as a parameter.
// Also reminds you what a reference parameter looks like
void example2_1(double *ptr, int &a) {
    *ptr = 9.3; // Change whater ptr points to
    a = 17;
}
// Shows the syntax for passing an address to a function.
// Also reminds you how to pass by reference
void example2() {
    double x = 22;
    double y = 15;
    example3_1(&x, y);
    cout << x << endl; // prints 9.3 because we changed it in example2_1
    cout << y << endl; // prints 17 because we changed it in example2_1
}

int main() {
    example1();
    example2();
}
