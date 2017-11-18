#include "Invocacion.h"

Invocacion :: Invocacion(string pNombre,string pNivel,string pNombrem,string pEspecie,string pHabilidad, string pTipo) : Poder(pNombre,pNivel){
  nombrem=pNombrem;
  especie=pEspecie;
}

string Invocacion::getNombrem(){
    return nombrem;
}


string Invocacion::getEspecie(){
    return especie;
}

string Invocacion::getHabilidad(){
    return habilidad;
}

string Invocacion::getTipo(){
    return tipo;
}

string Invocacion::toString(){
    return "Test";
}

Invocacion::~Invocacion(){

}
