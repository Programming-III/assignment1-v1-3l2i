#include <iostream>
#include <string>
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
using namespace std;
//_________________Animal______________

Animal::Animal(){
  name = ""
  age = 0;
  isHungry = false;
}
Animal::Animal(String name, int age, bool isHungry){
  name = n;
  age = a;
  isHungry = h;
}
Animal::~Animal(){};

Animal:: void display(){
  cout << n << "(" << a << "," << h << ")" << endl;
}
Animal:: void feed(){
  if 
}
//Mammal

Mammal::Mammal(){
  furColor =""
}
Mammal::Mammal(string name, int age, bool isHungry, string furColor) : Animal(string name, int age, bool isHungry){
  furColor = fr;
}
Mammal::~Mammal(){};

//Bird
Bird::Bird(){
  float wingSpan = 0.0;
}
Bird::Bird(string name, int age, bool isHungry, float wingSpan) : Animal(string name, int age, bool isHungry){
  wingSpan = ws;
}
Bird::~Bird(){};


//Reptile

Reptile::Reptile(){
  isVenomous = false;
}
Reptile::Reptile(string name, int age, bool isHungry, bool isVenomous) : Animal(string name, int age, bool isHungry){
  isVenomous = is;
}
Reptile::~Reptile(){};

//Enclosure

Enclosure::Enclosure(){
  capacity = 0;
  currentCount = 0;
}
Enclosure::Enclosure(int currentCount, int capacity, virtual [] Animal*){
  currentCount = cc;
  capacity = ca;
}
Enclosure::~Enclosure(){};

//visitor
visitor::visitor(){
  visitorName = "";
  ticketBought = 0;
}
Visitor::Visitor(string vistorName, int ticketBought){
  vistorName = vn;
  ticketBought = tb;
}
Visitor::~Visitor(){};

visitor:: void displayinfo(){
  cout << "Name: Sarah Ali"<< vn << endl;
  cout << "Tickets Bought:" << tb << endl;
}

int main() {
    
    
    return 0;
}
