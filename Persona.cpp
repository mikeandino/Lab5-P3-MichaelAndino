#include "Persona.h"

Persona :: Persona(string pNombre,string pNacion,string pEdad, string pSexo){
  nacion=pNacion;
  nombre=pNombre;
  edad=pEdad;
  sexo=pSexo;
}

string Persona::getNacion(){
    return nacion;
}

string Persona::getNombre(){
    return nombre;
}

string Persona::getEdad(){
  return edad;
}

string Persona::getSexo(){
  return sexo;
}

~Persona();
