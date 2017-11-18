#include "AirBender.h"

AirBender :: AirBender(string pNombre,string pNacion,string pEdad, string pSexo,string pPelo,string pFlecha,Poder pPoder):Persona(pNombre,pNacion,pEdad, pSexo){
  pelo=pPelo;
  flecha=pFlecha;
  poder=pPoder;
}

string AirBender::getPelo(){
    return pelo;
}

string AirBender::getFlecha(){
    return flecha;
}

string AirBender::getPoder(){
  return poder.toString();
}

AirBender::~AirBender(){

}
