#ifndef   ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
using namespace std;

class Animal{
  private:
    string name;
    int age;
    bool isHungry;
  
  public:
   Animal();
   Animal(string name, int age, bool isHungry);
   ~Animal();
  
   void setname();
   void setage();
   void setisHungry();
   string getname(string name) const;
   int getage(int age) const;
   bool getisHungry(bool isHungry) const;
   void display() const;
   void feed() const;
};

#endif 



