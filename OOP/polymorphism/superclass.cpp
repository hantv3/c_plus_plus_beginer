#include <iostream>

using namespace std;
class SupperClass {
    public:
        int x = 10;

        virtual void display(){
            cout << x << endl;
        }
};
class SubClass : public SupperClass {
    public:
        int x = 20;
        void display(){
            cout << x << endl;
        }
};
int main(){
    SupperClass* s = new SubClass();
    cout << s->x << endl;
    s->display();
return 0;
}