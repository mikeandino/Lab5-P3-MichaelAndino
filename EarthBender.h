#ifndef EARTHBENDER_H
#define EARTHBENDER_H
#include <iostream>
#include <string>
#include "Persona.h"
#include "Poder.h"

using namespace std;

class EarthBender : public Persona{
  public:
    string coles;
    string grado;
    Poder poder;
    EarthBender(string,string,string,string,string,string,Poder);
    string getColes();
    string getGrado();
    string getPoder();
    ~EarthBender();
};
#endif
