#include "NoBender.h"

NoBender :: NoBender(string pNombre,string pNacion,string pEdad, string pSexo,string pTrabajo,string pFuerza,string pVelocidad):Persona(pNombre,pNacion,pEdad, pSexo){
  trabajo=pTrabajo;
  fuerza=pFuerza;
  velocidad=pVelocidad;
}

string NoBender::getTrabajo(){
    return nacion;
}

string NoBender::getFuerza(){
    return nombre;
}

string NoBender::getVelocidad(){
  return edad;
}

~NoBender();
