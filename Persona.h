#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>
using namespace std;

class Persona{
  public:
    string nacion;
    string nombre;
    string edad;
    string sexo;
    Persona(string,string,string,string);
    string getNacion();
    string getNombre();
    string getEdad();
    string getSexo();
    ~Persona();
  };
#endif
