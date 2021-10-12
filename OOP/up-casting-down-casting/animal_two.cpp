#include <iostream>

using namespace std;
class Animal
{
public:
    virtual void sound()
    {
        cout << "some sound" << endl;
    }
};
class Cat : public Animal
{
public:
    void sound()
    {
        cout << "meow meow";
    }
};
class Dog : public Animal
{
public:
    void sound()
    {
        cout << "woof wooof";
    }
};

int main()
{
    Cat cat;
    Animal *animal = &cat;
    animal->sound();

    Dog dog;
    Animal *animal2 = &dog;
    animal2->sound();
    return 0;
}