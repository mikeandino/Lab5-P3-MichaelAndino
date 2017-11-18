#ifndef AIRBENDER_H
#define AIRBENDER_H
#include <iostream>
#include <string>
#include "Persona.h"
#include "Poder.h"

using namespace std;

class AirBender : public Persona{
  public:
    string pelo;
    string flecha;
    Poder poder;
    AirBender(string,string,string,string,string,string,Poder);
    string getPelo();
    string getFlecha();
    string getPoder();
    ~AirBender();
};
#endif
