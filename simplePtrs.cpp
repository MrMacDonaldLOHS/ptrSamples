#include <iostream>
using namespace std;

// Demonstrates:
// 1. Initializing a pointer to nullptr
// 2. Getting the address of an object using the & operator.
// 3. Dereferencing a pointer using the * operator
void example1() {
    cout << "example1" << endl;
    int a = 1;
    int *ptrA = nullptr; // Declare a pointer. set it to null
    ptrA = &a; // Get the address of a and store it in ptrA
    cout << "a = " << a << endl;
    *ptrA = 2; // Dereference *ptrA, which will change a's value
    cout << "a = " << a << endl;
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
    cout << endl;
    cout << "example2" << endl;
    double x = 22;
    int y = 15;

    cout << "pre call" << endl;
    cout << "x = " << x << endl; // Print the values prior to the function call
    cout << "y = " << y << endl; 

    example2_1(&x, y); // Passing x by pointer and y by reference


    cout << "post call" << endl;
    cout << "x = " << x << endl; // prints 9.3 because we changed it in example2_1
    cout << "y = " << y << endl; // prints 17 because we changed it in example2_1
}

int main() {
    example1();
    example2();
    return 0;
}
