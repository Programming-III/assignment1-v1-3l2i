#ifndef VISITOR_H
#define VISITOR_H
#include <iostream>
#include <string>
using namespace std;

class Visitor{
  private:
   string visitorName;
   int ticketBought;
   
  public:
   Vistor();
   Vistor(string visitorName, int ticketBought);
   ~vistor(); 
   
   void setvisitorName();
   void setticketBought();
   
   string getvisitorName(string vistorName) const;
   int getticketBought(int ticketBought) const;
   
   void displayInfo() const;
};

#endif
