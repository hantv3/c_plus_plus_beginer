// Quan he hop thanh
#include <iostream>

using namespace std;
class ClassA {
  private:
    ClassB *b;
  public:
    ClassA(){
      b = new ClassA();
    }
};
