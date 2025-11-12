#ifndef MAMMAL_H
#define MAMMAL_H
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

class Mammal : public Animal{
  private:
   string furColor
  
  
  public:
   Mammal();
   Mammal(string name, int age, bool isHungry, string furColor) : Animal(string name, int age, bool isHungry);
   ~Mammal();
   
   void setfurColor();
   string getfurColor(string furColor) const;
};

#endif
