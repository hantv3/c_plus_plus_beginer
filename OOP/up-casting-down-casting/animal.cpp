#include <iostream>

using namespace std;
class Animal
{
public:
    void sound()
    {
        cout << "some sound" << endl;
    }
};
class Dog : public Animal
{
public:
    void sound()
    {
        cout << "woof wood" << endl;
    }
    void play()
    {
        cout << "The dog is playing";
    }
};
int main()
{
    Animal animal;
    Dog *d = (Dog *)&animal;

    d->sound();
    d->play();
    return 0;
}