#include <iostream>

using namespace std;
class Person {
    private:
        string name;
    public:
        Person(string name){
            this->name = name;
        }
        string getName(){
            return name;
        }
        void setName(string name){
            this->name = name;
        }
};

class Student : public Person {
    public:
        Student(string name) :Person(name) {

        }
};
int main(){
    Student s("Han");
    cout << s.getName();
    return 0;
}