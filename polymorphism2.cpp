#include <iostream>
using namespace std;
class Employee {
    private:
        string name;
        int salary;
    public:
        Employee(string name, int salary) {
            this->name = name;
            this->salary = salary;
        }

        string getName(){
            return name;
        }
        void setName(string name){
            this->name = name;
        }

        int getSalary() {
            return salary;
        }

        void setSalary(int salary){
            this->salary = salary;
        }

        void display() {
            cout << "Name: " << getName() << endl;
            cout << "Salary: " << getSalary() << endl;
        }

};

class Manager : Employee {
    private:
        int bonus;
    public:
        Manager(string name, int salary, int bonus) : Employee(name, salary){
            this->bonus = bonus;
        }

        int getBonus(){
            return bonus;
        }

        void setBonus(int bonus) {
            this->bonus = bonus;
        }

        int getSalary() {
            return Employee::getSalary() + bonus;
        }
};
int main(){
   
    return 0;
}