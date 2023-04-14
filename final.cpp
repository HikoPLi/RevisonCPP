// In Java, we can use final for a function to make sure that it cannot be overridden.
//  We can also use final in Java to make sure that a class cannot be inherited. Similarly, the latest C++ standard C++ 11 added final.
// Use of final specifier in C++ 11:
// Sometimes you don’t want to allow derived class to override the base class’ virtual function.
// C++ 11 allows built-in facility to prevent overriding of virtual function using final specifier.

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void myfun() final
    {
        cout << "myfun() in Base";
    }
};
class Derived : public Base
{
    void myfun()
    {
        cout << "myfun() in Derived\n";
    }
};

int main()
{
    Derived d;
    Base &b = d;
    b.myfun();
    return 0;
}

// error: final.cpp:7:26: warning: 'final' keyword is a C++11 extension [-Wc++11-extensions]
//     virtual void myfun() final
//                          ^
// final.cpp:14:10: error: declaration of 'myfun' overrides a 'final' function
//     void myfun()
//          ^
// final.cpp:7:18: note: overridden virtual function is here
//     virtual void myfun() final
//                  ^
// 1 warning and 1 error generated.

// The following program shows use of final specifier to make class non inheritable:

#include <iostream>
class Base final
{
};

class Derived : public Base
{
};

int main()
{
    Derived d;
    return 0;
}

// error: cannot derive from ‘final’ base ‘Base’ in derived type ‘Derived’
//  class Derived : public Base

class Test
{
    final void fun() // use of final in Java
    {
    }
} class Test
{
public:
    virtual void fun() final // use of final in C++ 11
    {
    }
};
// final has meaning only when used in above contexts, otherwise it’s just an identifier.
// One possible reason to not make final a keyword is to ensure backward compatibility.
//  There may exist production codes which use final for other purposes.
//  For example the following program compiles and runs without error.

#include <iostream>
using namespace std;

int main()
{
    int final = 20;
    cout << final;
    return 0;
}

// output: 20
