#include "classWithPtrs.h"
#include <iostream>
using namespace std;
// When we pass by ptr, we do not call a copy constructor or = operator
void example(classWithPtrs *x) {
    x->print();
}


// Notice! We now use -> instead of . to access class functions!
int main() {
    classWithPtrs *a = new classWithPtrs;
    classWithPtrs *b = new classWithPtrs("John", "Doe");
    classWithPtrs *c = new classWithPtrs("Jane", "Doe");
 
    cout << "a after constructor" << endl;
    a->print();
    cout << "b after constructor" << endl;
    b->print();
    cout << "c after constructor" << endl;
    c->print();

    // copy constructor
    classWithPtrs *d = new classWithPtrs(*b);
    cout << "d after constructor" << endl;
    d->print();

    // equal operator
    *b = *c;
    cout << "b after equal operator" << endl;
    c->print();
    
    cout << "calling example with d" << endl;
    example(d);

    // We used new, we must use delete
    delete a;
    delete b;
    delete c;
    delete d;


    

}
