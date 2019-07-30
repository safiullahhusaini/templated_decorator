#pragma once

#include <iostream>
#include <decorator.h>

class decoratee_A
{
public:
  
  void work()
  {
    std::cout<<"A is the first ";
  }
};

class decoratee_B
{
public:
  
  void work()
  {
    std::cout<<"B is the second ";
  }
};
