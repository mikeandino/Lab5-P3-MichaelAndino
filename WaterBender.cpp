#include "WaterBender.h"

WaterBender :: WaterBender(string pNombre,string pNacion,string pEdad, string pSexo,string pTribu,string pArma,Poder pPoder):Persona(pNombre,pNacion,pEdad, pSexo){
  tribu=pTribu;
  arma=pArma;
  poder=pPoder;
}

string WaterBender::getTribu(){
    return tribu;
}

string WaterBender::getArma(){
    return arma;
}

string WaterBender::getPoder(){
  return poder.toString();
}

WaterBender::~WaterBender(){

}
