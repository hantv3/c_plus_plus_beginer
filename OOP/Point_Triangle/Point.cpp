#pragma once

class Point
{
private:
  int x;
  int y;

public:
  Point(){};
  Point(int x, int y)
  {
    this->x = x;
    this->y = y;
  }

  // set
  void setX(int x)
  {
    this->x = x;
  }

  void setY(int y)
  {
    this->y = y;
  }

  // get
  int getX()
  {
    return this->x;
  }

  int getY()
  {
    return this->y;
  }
};
