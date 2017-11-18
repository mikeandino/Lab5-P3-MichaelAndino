#ifndef CURATIVO_H
#define CURATIVO_H
#include <iostream>
#include <string>
#include "Poder.h"
using namespace std;

class Curativo : public Poder{
  public:
    string tipo;
    Curativo(string,string,string);
    string getTipo();
    string toString();
    ~Curativo();
};
#endif
