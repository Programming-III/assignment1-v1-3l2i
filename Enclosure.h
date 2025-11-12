#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include <iostream>
using namespace std;

class Enclosure{
  private:
   int capacity; 
   int currentCount;
   virtual [] Animal*;

  public:
   Enclosure();
   Enclosure(int currentCount, int capacity, virtual [] Animal*);
   ~Enclosure();
  
   void setcapacity();
   void setcurrentCount();
   
   int getcapacity(int capacity) const;
   int getcurrentCount(int currentCount) const;
   
   void addAnimal(Animal* a) const;
   void displayAnimals() const;
};

#endif
