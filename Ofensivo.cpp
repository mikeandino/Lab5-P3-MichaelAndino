#include "Ofensivo.h"

Ofensivo :: Ofensivo(string pNombre,string pNivel,string pRango,string pFuerza) : Poder(pNombre,pNivel){
  rango=pRango;
  fuerza=pFuerza;
}

string Ofensivo::getRango(){
    return rango;
}


string Ofensivo::getFuerza(){
    return fuerza;
}

string Ofensivo::toString(){
    return "Test";
}

Ofensivo::~Ofensivo(){

}
