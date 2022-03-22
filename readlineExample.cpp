#include <iostream>
#include <cstring>
using namespace std;
// This begins to demonstrate why pointers are useful
// We can create the pointer in one function, and the memory
// stays until we delete it. That means we can return
// the pointer to the calling function.

// This function:
// 1. Reads a line of text into a massively large string (1000 bytes).
// 2. Calculates the actual number of bytes needed to hold whatever the user entered.
// 3. Allocates a character array with exactly that much space.
// 4. Copies the string from the giant array into the smaller array.
// 5. Returns the pointer to the calling function.
// 6. IT IS THE RESPONSIBILITY OF THE CALLING FUNCTION TO DO THE delete[]
char *readLine(istream &in, char delimeter) {
    // will create a very large array because we will not use most of it.
    const int MAX_SIZE = 1000;
    char temp[MAX_SIZE];
    in.getline(temp, MAX_SIZE, delimeter);
    // Here comes the cool part, find out the length of the string
    // We use + 1 so we can add the '\0' to the end of our string
    int numBytes = strlen(temp) + 1;
    // Now allocate only that much memory
    char *ptr = new char[numBytes];
    // copy just those bytes.
    strcpy(ptr, temp);
    return ptr;
}

// Just a convenience function
char *readLineWithPrompt(istream &in, const char prompt[], char delimiter) {
    cout << prompt;
    return readLine(in, delimiter);
}

// Demonstrates:
// 1. calling a function that returns a pointer.
// 2. deleting the returned pointer when we are done with it.
void example1() {
    char *word1 = readLineWithPrompt(cin, "Enter a sentence: ", '\n');
    char *word2 = readLineWithPrompt(cin, "Enter another sentence: ", '\n');
    cout << "You entered:" << endl;
    cout << word1 << endl;
    cout << word2 << endl;
    // We allocated the arrays with new [] so we must use delete []
    delete[] word1;
    delete[] word2;
}

int main() {
    example1();
    return 0;
}
