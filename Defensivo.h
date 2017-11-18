#ifndef OFENSIVO_H
#define OFENSIVO_H
#include <iostream>
#include <string>
#include "Poder.h"
using namespace std;

class Defensivo : public Poder{
  public:
    string resistencia;
    string duracion;
    Defensivo(string,string,string,string);
    string getResistencia();
    string getDuracion();
    string toString();
    ~Defensivo();
};
#endif
