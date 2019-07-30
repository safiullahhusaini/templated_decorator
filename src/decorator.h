#pragma once
#include <iostream>

template <typename T>
class decorator
{
public:
  decorator(T& t): t(t) {}
  
  void work()
  {
    t.work();
    std::cout<<"letter of the alphabet"<<std::endl;
  }
private:
  T& t;
};
