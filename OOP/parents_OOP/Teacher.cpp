#include "Person.cpp"
#include <iostream>
using namespace std;
class Teacher : public Person {
    private:
        int salary;
    public:
    Teacher(string name, int age, string address, int salary) :Person(name, age, address){
        this->salary = salary;
    }
    double getSalary(){
        return salary;
    }

    void setSalary(double salary){
        this->salary = salary;
    }

    void display(){
        Person::display();
        cout << "Salary: " << this->getSalary() << endl;
    }
};