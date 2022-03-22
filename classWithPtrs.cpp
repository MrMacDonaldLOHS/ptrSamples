#include "classWithPtrs.h"
#include <cstring>
#include <iostream>
using namespace std;
classWithPtrs::classWithPtrs() {
    firstName = nullptr;
    lastName = nullptr;
}

// Constructor allowing us to set the first & last name.
classWithPtrs::classWithPtrs(const char fname[], const char lname[]) {
    // As always, +1 so we have space for the '\0'!
    firstName = new char[strlen(fname) + 1];
    lastName = new char[strlen(lname) + 1];
    strcpy(firstName, fname);
    strcpy(lastName, lname);
}

classWithPtrs::classWithPtrs(const classWithPtrs &other) {
    copy(other);
}

classWithPtrs::~classWithPtrs() {
   deleteAll(); 
}

classWithPtrs &classWithPtrs::operator = (const classWithPtrs &other) {
    // Before we change our pointers, delete the existing ones!
    deleteAll();
    // Now we can change out pointers to point to new data.
    copy(other);
    return *this;
}

void classWithPtrs::print() {
    cout << "first name: ";
    if (firstName == nullptr) {
       cout << "null"; 
    }
    else {
        cout << firstName;
    }
    cout << ", last name: ";
    if (lastName == nullptr) {
        cout << "null";
    }
    else {
        cout << lastName;
    }
    cout << endl;
}


void classWithPtrs::deleteAll() {
    if (firstName != nullptr) {
        delete [] firstName;
    }
    if (lastName != nullptr) {
        delete [] lastName;
    }
}

void classWithPtrs::copy(const classWithPtrs &other) {
    firstName = nullptr;
    lastName = nullptr;
    if (other.firstName != nullptr) {
        // As always, +1 so we have space for the '\0'!
        firstName = new char[strlen(other.firstName) + 1];
        strcpy(firstName, other.firstName);
    }
    if (other.lastName != nullptr) {
        lastName = new char[strlen(other.lastName) + 1];
        strcpy(lastName, other.lastName);
    }
}
