#include "Poder.h"

Poder :: Poder(string pNombre,string pNivel){
  nombre=pNombre;
  nivel=pNivel;
}

Poder :: Poder(){
  
}

string Poder::getNombre(){
    return nombre;
}


string Poder::getNivel(){
    return nivel;
}

string Poder::toString(){
    return "Test";
}

Poder::~Poder(){

}
