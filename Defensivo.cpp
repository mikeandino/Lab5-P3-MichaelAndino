#include "Defensivo.h"

Defensivo :: Defensivo(string pNombre,string pNivel,string pResistencia,string pDuracion) : Poder(pNombre,pNivel){
  resistencia=pResistencia;
  duracion=pDuracion;
}

string Defensivo::getResistencia(){
    return resistencia;
}


string Defensivo::getDuracion(){
    return duracion;
}

string Defensivo::toString(){
    return "Test";
}

Defensivo::~Defensivo(){

}
