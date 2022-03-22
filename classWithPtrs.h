// This prevents the "multiple declarations of..." errors. Even if we #include this
// file multiple times, it will only be include once.
#pragma once

class classWithPtrs {
    public:
        classWithPtrs();
        classWithPtrs(const char fname[], const char lname[]);
        void print();
        // This is new! The copy constructor. If you use pointers
        // you must always declare and define this!
        classWithPtrs(const classWithPtrs &other);
        // You must also always declare and define the destructor
        ~classWithPtrs();
        // Finally, you must always declare and define the equal operator
        classWithPtrs &operator = (const classWithPtrs &other);


    private:
        char *firstName;
        char *lastName;
        // Generally, when dealing with pointers you will want to create
        // these two private functions that you can call from multiple
        // places.
        void deleteAll();
        void copy(const classWithPtrs &other);

};
