#include <iostream>
using namespace std;
class Student {
    private:
        string name;
        int age;
        double gpa;
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
   cout <<  s.getName();
   return 0;
}