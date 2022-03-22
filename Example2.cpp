#include <iostream>
#include <cstring>
using namespace std;
// Demonstrates how to allocate an array of ints
void example1() {
    // The size can be held in a variable or a number
    int *ptr1 = new int[50];
    // Now you can access ptr1 just like any array
    for (int index = 0; index < 50; index ++) {
        ptr1[index] = 0;
    }
    // When you are done with a pointer, you must delete it
    // When you allocated an array, you use delete[]
    delete[] ptr1;
}

// Demonstrates how to allocate and use an array of characters
void example2() {
    // Allocate enough space for the word "hello";
    // We ALWAYS add 1 so we have space for '\0'
    int size = strlen("hello") + 1;
    char *word = new char[size];

    // Once we have allocated a character array we can use
    // it just like a normal one.
    strcpy(word, "hello");
    cout << word << endl;
    
    // We used new[] so we must use delete[]
    delete [] word;
}



// Demonstrates reading a string of words from the user
// and allocating exactly the number of bytes we need.
char *readLine(istream &in, const char prompt[]) {
    // will create a very large array because we will not use most of it.
    const int MAX_SIZE = 1000;
    char temp[MAX_SIZE];
    cout << prompt; 
    in.getline(temp, MAX_SIZE);
    // Here comes the cool part, find out the length of the string
    // We use + 1 so we can add the '\0' to the end of our string
    int numBytes = strlen(temp) + 1;
    // Now allocate only that much memory
    char *ptr = new char[numBytes];
    strcpy(ptr, temp);
    return ptr;
}

void example3() {
    char *word1 = readLine(cin, "Enter a sentence: ");
    char *word2 = readLine(cin, "Enter another sentence: ");
    cout << "You entered:" << endl;
    cout << word1 << endl;
    cout << word2 << endl;
    // We allocated the arrays with new [] so we must use delete []
    delete[] word1;
    delete[] word2;
}

int main() {
    example1();
    example2();
    example3();

    return 0;

}
