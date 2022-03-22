#include <iostream>
#include <cstring>
using namespace std;
// Demonstrates:
// 1. The syntax for declaring and initializing pointer (again).
// 2. Setting that pointer equal to an array address.
// 3. Using that pointer to access the array.
// The big idea here is arrays variables are actually pointers.
void example1() {
    cout << "example1" << endl;
    int x[5];
    int *ptrX = nullptr;
    ptrX = x; // Notice how we do not use & when getting an array address.
    for (int index = 0; index < 5; index++) {
        ptrX[index] = index; // We access a pointer to an array just like an array.
    }
    // We changed ptrX, but print x. They are the same array
    for (int index = 0; index < 5; index++) {
        cout << "x[" << index << "] = " << x[index] << endl;
    }
}

// The same idea, but demonstrates that character arrays are really
// char pointers.
void example2() {
    cout << endl;
    cout << "example2" << endl;
    char x[100] = "Hello";
    char *ptrX = nullptr;
    cout << "pre strcpy x = " << x << endl;
    // Again, we do not use the & operator when setting a ptr to an array    
    ptrX = x;
    // We can use all the normal string operations, strlen, strcpy on char *
    cout << "Length of ptrX pre strcpy " <<  strlen(ptrX) << endl;
    strcpy(ptrX, "world!");

    cout << "post strcpy x = " << x << endl;
    cout << "Length of ptrX post strcpy " <<  strlen(ptrX) << endl;


}


int main() {
    example1();
    example2();
    return 0;
}
