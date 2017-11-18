#ifndef OFENSIVO_H
#define OFENSIVO_H
#include <iostream>
#include <string>
#include "Poder.h"
using namespace std;

class Ofensivo : public Poder{
  public:
    string rango;
    string fuerza;
    Ofensivo(string,string,string,string);
    string getRango();
    string getFuerza();
    string toString();
    ~Ofensivo();
};
#endif
