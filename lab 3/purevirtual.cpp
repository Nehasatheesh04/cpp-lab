#include <iostream>

// Abstract base class with pure virtual function
class Animal {
public:
    virtual void speak() = 0; // pure virtual function
};

// Concrete class that derives from Animal
class Cat : public Animal {
public:
    void speak() {
        std::cout << "Meow!" << std::endl;
    }
};

// Concrete class that derives from Animal
class Dog : public Animal {
public:
    void speak() {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    // Animal is an abstract base class and cannot be instantiated
    // Animal myAnimal; // will not compile

    // However, we can create pointers to Animal objects and use them polymorphically
    Animal* myCat = new Cat();
    Animal* myDog = new Dog();

    // The speak function is polymorphic and will call the appropriate implementation
    myCat->speak(); // output: Meow!
    myDog->speak(); // output: Woof!

    // Remember to delete dynamically allocated objects
    delete myCat;
    delete myDog;

    return 0;
}
