#include "Person.cpp"
#include <iostream>

using namespace std;
class Customer : public Person {
    private:
        int balance;
    public:
        Customer(string name, string address, int balance) : Person(name, address){
            this->balance = balance;
        }
        void display(){
            std::cout << "Customer name: " << this->getName() << endl;
            std::cout << "Customer address: " << this->getAddress() << endl;
            std::cout << "Customer balance: " << this->balance << endl;
        }
};