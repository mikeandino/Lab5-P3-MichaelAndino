#include "EarthBender.h"

EarthBender :: EarthBender(string pNombre,string pNacion,string pEdad, string pSexo,string pColes,string pGrado,Poder pPoder):Persona(pNombre,pNacion,pEdad, pSexo){
  coles=pColes;
  grado=pGrado;
  poder=pPoder;
}

string EarthBender::getColes(){
    return coles;
}

string EarthBender::getGrado(){
    return grado;
}

string EarthBender::getPoder(){
  return poder.toString();
}

EarthBender::~EarthBender(){

}
