#include "Person.cpp"
#include <iostream>

using namespace std;
    class Employee : public Person {
        private:
            int salary;
        public:
            Employee(string name, string address, int salary) : Person(name, address){
                this->salary = salary;
            }
            void display(){
                std::cout << "Employee name: " << this->getName() << endl;
                std::cout << "Employee address: " << this->getAddress() << endl;
                std::cout << "Employee salary: " << this->salary << endl;
            }
    };