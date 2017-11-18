#include "NoBender.h"

NoBender :: NoBender(string pNombre,string pNacion,string pEdad, string pSexo,string pTrabajo,string pFuerza,string pVelocidad):Persona(pNombre,pNacion,pEdad, pSexo){
  trabajo=pTrabajo;
  fuerza=pFuerza;
  velocidad=pVelocidad;
}

string NoBender::getTrabajo(){
    return trabajo;
}

string NoBender::getFuerza(){
    return fuerza;
}

string NoBender::getVelocidad(){
  return velocidad;
}

NoBender::~NoBender(){

}
