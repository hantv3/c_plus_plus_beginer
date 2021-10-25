#include "Tea.cpp";
#include "TeaWithTopping.cpp";

using namespace std;

int main(){
  Tea* Tea1 = new Tea(15.000, true, 7.000);
  cout << Tea1->getCost();
  return 0;
}
