#ifndef PODER_H
#define PODER_H
#include <iostream>
#include <string>
using namespace std;

class Poder{
  public:
    string nombre;
    string nivel;
    Poder(string,string);
    Poder();
    string getNombre();
    string getNivel();
    string toString();
    ~Poder();
};
#endif
