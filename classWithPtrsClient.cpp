#include "classWithPtrs.h"
#include <iostream>
using namespace std;
// When we call example and pass in an instance we will
// use the equal operator or copy constructor (different 
// compilers choose).
void example(classWithPtrs x) {
    cout <<  "value of x when passed in to example" << endl;
    x.print();
}

int main() {
    classWithPtrs a;
    classWithPtrs b("John", "Doe");
    classWithPtrs c("Jane", "Doe");
 
    cout << "a after constructor" << endl;
    a.print();
    cout << "b after constructor" << endl;
    b.print();
    cout << "c after constructor" << endl;
    c.print();

    // copy constructor
    classWithPtrs d(b);
    cout << "d after constructor" << endl;
    d.print();

    // equal operator
    b = c;
    cout << "b after equal operator" << endl;
    c.print();
    
    cout << "calling example with d" << endl;
    example(d);

    

}
