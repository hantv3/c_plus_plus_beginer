#pragma once
#include <iostream>
#include <math.h>

using namespace std;

class Point{
  private:
    int x;
    int y;
  public:
    Point(){};
    Point(int x, int y){
      this->x = x;
      this->y = y;
    }

    // set X, Y
    void setX(int x){
      this->x = x;
    }
    void setY(int y){
      this-> y = y;
    }

    // get X, Y
    int getX(){
      return x;
    }
    int getY(){
      return y;
    }
};
