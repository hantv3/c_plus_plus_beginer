#pragma once

#include <iostream>

using namespace std;

class Tea {
  private:
    float baseCost;
    bool hasToping;
    float toppingCost;
  public:
    Tea(float baseCost, bool hasToping, float toppingCost){
      this->baseCost = baseCost;
      this->hasToping = hasToping;
      this->toppingCost = toppingCost;
    }
    float getCost(){
      float cost = baseCost;
      if(hasToping){
        cost += toppingCost;
      }
      return cost;
    }
};

