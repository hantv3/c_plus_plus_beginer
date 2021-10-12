#include <iostream>

using namespace std;

class Student {
    private:
        string name;
        int age;
    public:
        Student(string name, int age){
            this->name = name;
            this->age = age;
        }

        void display(){
            cout << "My name is " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main() {
    Student s("Viet", 19);
    s.display();
    return 0;
}