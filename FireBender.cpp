#include "FireBender.h"

FireBender :: FireBender(string pNombre,string pNacion,string pEdad, string pSexo,string pCicatriz,string pVictorias,Poder pPoder):Persona(pNombre,pNacion,pEdad, pSexo){
  cicatriz=pCicatriz;
  victorias=pVictorias;
  poder=pPoder;
}

string FireBender::getCicatriz(){
    return cicatriz;
}

string FireBender::getVictorias(){
    return victorias;
}

string FireBender::getPoder(){
  return poder.toString();
}

FireBender::~FireBender(){

}
