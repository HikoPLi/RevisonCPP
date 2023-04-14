#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    // Virtual function that can be overridden by derived classes
    virtual void makeSound()
    {
        cout << "The animal makes a sound." << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    // Override the makeSound() function with a new implementation
    void makeSound() override
    {
        cout << "The dog barks." << endl;
    }
};

int main()
{
    // Create an instance of Animal and an instance of Dog
    Animal *animal = new Animal();
    Dog *dog = new Dog();

    // Call the makeSound() function on each object
    animal->makeSound(); // outputs "The animal makes a sound."
    dog->makeSound();    // outputs "The dog barks."

    // Create a pointer to an Animal object and assign it to a Dog object
    Animal *animal2 = new Dog();
    // Call the makeSound() function on the Animal pointer
    // This still outputs "The dog barks." because the function is virtual
    // and the object is actually a Dog object, so the overridden function
    // in the Dog class is called.
    animal2->makeSound(); // outputs "The dog barks."

    // Free up memory by deleting the dynamically allocated objects
    delete animal;
    delete dog;
    delete animal2;

    return 0;
}

// output:
// virtual.cpp:20:22: warning: 'override' keyword is a C++11 extension [-Wc++11-extensions]
//     void makeSound() override
//                      ^
// 1 warning generated.
// The animal makes a sound.
// The dog barks.
// The dog barks.