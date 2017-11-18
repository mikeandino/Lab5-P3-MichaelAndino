#ifndef FIREBENDER_H
#define FIREBENDER_H
#include <iostream>
#include <string>
#include "Persona.h"
#include "Poder.h"

using namespace std;

class FireBender : public Persona{
  public:
    string cicatriz;
    string victorias;
    Poder poder;
    FireBender(string,string,string,string,string,string,Poder);
    string getCicatriz();
    string getVictorias();
    string getPoder();
    ~FireBender();
};
#endif
