#include <iostream>
using namespace std;
// A generic smart pointer class
template <class T>
class SmartPtr
{
    T *ptr; // Actual pointer
public:
    // Constructor
    explicit SmartPtr(T *p = NULL) { ptr = p; }
    // Destructor
    ~SmartPtr() { delete (ptr); }
    // Overloading dereferncing operator
    T &operator*() { return *ptr; }
    // Overloading arrow operator, so members of T can be
    accessed
        // like a pointer (useful if T represents a class or struct
        or
        // union type)
        T *operator->()
    {
        return ptr;
    }
};

int main()
{
    SmartPtr<int> ptr(new int());
    *ptr = 20;
    cout << *ptr;
    return 0;
}

// We don't need to call "delete ptr" here:
// when ptr goes out of scope, destructor
// for it is automatically called and the
// destructor does "delete ptr".

// error:
// smartPointer.cpp:16:5: error: unknown type name 'accessed'
//     accessed
//     ^
// smartPointer.cpp:18:9: error: expected member name or ';' after declaration specifiers
//         or
//         ^
// 2 errors generated.