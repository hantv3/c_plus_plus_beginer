#include <iostream>

using namespace std;
class Student {
    public:
        string name;
        int age;
        void getInformation(string name, int age){
            this->name = name;
            this->age = age;
        }

        void display(){
            cout << "Name: " << name << endl; 
            cout << "Age: " << age << endl; 
        }
};
int main(){
    Student han;
    han.getInformation("Han", 13);
    han.display();
    return 0;
}