#ifndef NOBENDER_H
#define NOBENDER_H
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;

class NoBender: public Persona{
  public:
    string trabajo;
    string fuerza;
    string velocidad;
    NoBender(string,string,string,string,string,string,string);
    string getTrabajo();
    string getFuerza();
    string getVelocidad();
    ~NoBender();
};
#endif
