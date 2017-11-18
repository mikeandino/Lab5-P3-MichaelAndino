#include "Curativo.h"

Curativo :: Curativo(string pNombre,string pNivel,string pTipo) : Poder(pNombre,pNivel){
  tipo=pTipo;
}

string Curativo::getTipo(){
    return tipo;
}

string Curativo::toString(){
    return "Test";
}

Curativo::~Curativo(){

}
