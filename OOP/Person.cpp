#include <iostream>

using namespace std;
class Person{
    private:
        string name;
        int age;
    public:
        string getName(){
            return name;
        }

        void setName(string name){
            this->name = name;
        }

        int getAge(){
            return age;
        }

        void setAge(int age){
            this->age = age;
        }
};
// Khai báo class kế thừa
class Student : public Person {
    private:
        double gpa;
    public:
        double getGpa(){
            return gpa;
        }

        void setGpa(double gpa){
            this->gpa = gpa;
        }
};
int main(){
    Student s;
    s.setName("Han");
    s.setAge(20);
    s.setGpa(4);
    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;
    cout << "Gpa: " << s.getGpa() << endl;
    return 0;
}