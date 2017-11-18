#ifndef INVOCACION_H
#define INVOCACION_H
#include <iostream>
#include <string>
#include "Poder.h"
using namespace std;

class Invocacion : public Poder{
  public:
    string nombrem;
    string especie;
    string habilidad;
    string tipo;
    Invocacion(string,string,string,string,string,string);
    string getNombrem();
    string getEspecie();
    string getHabilidad();
    string getTipo();
    string toString();
    ~Invocacion();
};
#endif
