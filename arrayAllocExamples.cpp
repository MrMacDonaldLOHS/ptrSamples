#include <iostream>
#include <cstring>
using namespace std;
// Demonstrates:
// 1. How to allocate an array of ints and store them in a pointer.
// 2. How to access the array elements using a pointer.
// 3. How to delete the array when we are done with it.
void example1() {
    cout << "example1" << endl;
    // The size can be held in a variable or a number
    const int ARRAY_SIZE = 5;
    int *ptr1 = new int[ARRAY_SIZE];
    // Now you can access ptr1 just like any array
    for (int index = 0; index < ARRAY_SIZE; index ++) {
        ptr1[index] = 0;
    }
    for (int index = 0; index < ARRAY_SIZE; index ++) {
        cout << "ptr1[" << index << "] = " << ptr1[index] << endl;
    }
    // When you are done with a pointer, you must delete it
    // When you allocated an array, you use delete[]
    delete[] ptr1;
}

// Demonstrates how to allocate and use an array of characters
// The most important part is you must allocate + 1 in order to 
// have space for the 0.
void example2() {
    cout << endl;
    cout << "example2" << endl;
    // Allocate enough space for the word "hello";
    // We ALWAYS add 1 so we have space for '\0'
    int size = strlen("hello") + 1;

    // We will now have enough space for hello\0
    char *word = new char[size];

    // Once we have allocated a character array we can use
    // it just like a normal one.
    strcpy(word, "hello");
    cout << word << endl;
    
    // We used new[] so we must use delete[]
    delete [] word;
}




int main() {
    example1();
    example2();

    return 0;
}
