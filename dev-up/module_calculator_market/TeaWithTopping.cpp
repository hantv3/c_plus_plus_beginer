#include "Tea.cpp"

using namespace std;

class TeaWithTopping : public Tea {
  public:
    TeaWithTopping(float baseCost, bool hasTopping, float toppingCost) : Tea(baseCost, hasTopping, toppingCost){
    }
};


