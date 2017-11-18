#ifndef WATERBENDER_H
#define WATERBENDER_H
#include <iostream>
#include <string>
#include "Persona.h"
#include "Poder.h"

using namespace std;

class WaterBender : public Persona{
  public:
    string tribu;
    string arma;
    Poder poder;
    WaterBender(string,string,string,string,string,string,Poder);
    string getTribu();
    string getArma();
    string getPoder();
    ~WaterBender();
};
#endif
