#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"
#include "AirBender.h"
#include "FireBender.h"
#include "WaterBender.h"
#include "EarthBender.h"
#include "NoBender.h"
#include "Poder.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curativo.h"
#include "Invocacion.h"

using namespace std;

int main();

vector<Persona*> anadir(vector <Persona*>);

int main(){
  vector <Persona*> lista;
  int opcion = 5;
  do {
    cout<<"Registro Nacional de Maestros"<<endl
        <<" 1.Añadir Persona"<<endl
        <<" 2.Eliminar Persona"<<endl
        <<" 3.Listar Persona"<<endl
        <<" 4.Guardar en Archivo"<<endl
        <<" Ingrese su opcion: ";
        cin >> opcion;
        if (opcion==1) {
          lista=anadir(lista);
        } else if (opcion==2) {

        } else if (opcion==3) {

        } else if (opcion==4) {

        } else {

        }
        cout<<endl;
  } while(opcion!=5);
  return 0;
}

vector<Persona*> anadir(vector<Persona*> lista){
  cout << "Ingrese un nombre: ";
  string nombre;
  cin >> nombre;
  cout << "Ingrese un nacion: ";
  string nacion;
  cin >> nacion;
  cout << "Ingrese un edad: ";
  string edad;
  cin >> edad;
  cout << "Ingrese un sexo: ";
  string sexo;
  cin >> sexo;
  cout << "1. Maestro" << '\n'
       << "2. Non-Bender" << '\n'
       << "Ingrese su opcion: ";
  int selec;
  cin>>selec;
  while (selec!=1&&selec!=2) {
    cout << "Opcion invalida: ";
    cin >> selec;
  }
  if (selec==1) {
    /*Poder* poder;
    cout << "Ingrese un poder" << '\n'
         << "1. Ofensivo" << '\n'
         << "2. Defensivo" << '\n'
         << "3. Curativo" << '\n'
         << "4. Invocador de Mascotas" << '\n'
         << "Ingrese su opcion: ";
    cin>>selec;
    while ((selec!=1)&&(selec!=2)&&(selec!=3)&&(selec!=4)) {
      cout << "Opcion invalida: ";
      cin >> selec;
    }
    cout << "Ingrese el nombre del poder: ";
    string nombrem;
    cin>>nombrem;
    cout << "Ingrese el nivel del poder: ";
    string nivel;
    cin>>nivel;
    if (selec == 1) {
      cout << "Ingrese el rango del poder: ";
      string rango;
      cin>>rango;
      cout << "Ingrese la fuerza del poder: ";
      string fuerza;
      cin>>fuerza;
      poder = new Ofensivo(nombrem,nivel,rango,fuerza);
    } else if (selec == 2) {
      cout << "Ingrese el resistencia del poder: ";
      string resistencia;
      cin>>resistencia;
      cout << "Ingrese la duracion del poder: ";
      string duracion;
      cin>>duracion;
      poder = new Defensivo(nombrem,nivel,resistencia,duracion);
    } else if (selec == 3) {
      cout << "Ingrese el tipo del poder: ";
      string tipo;
      cin>>tipo;
      poder = new Curativo(nombrem,nivel,tipo);
    } else {
      cout << "Ingrese el nombre de la mascota: ";
      string nombre3;
      cin>>nombre3;
      cout << "Ingrese la especie de la mascota: ";
      string especie;
      cin>>especie;
      cout << "Ingrese la especie de la mascota: ";
      string especie;
      cin>>especie;
      cout << "Ingrese la habilidad de la mascota: ";
      string habilidad;
      cin>>habilidad;
      string tipo;
      cout << "Ingrese el tipo de la mascota" << '\n'
           << "1. Domestico" << '\n'
           << "2. Guerra" << '\n'
           << "Ingrese su opcion: ";
           cin>>selec;
           while ((selec!=1)&&(selec!=2)) {
             cout << "Opcion invalida: ";
             cin >> selec;
           }
           if (selec==1) {
             tipo="Domestico";
           } else {
             tipo="Guerra"
           }
      poder = new Invocacion(nombrem,nivel,nombre3,especie,habilidad,tipo);
    }
    cout << "1. Air Bender" << '\n'
         << "2. Fire Bender" << '\n'
         << "3. Earth Bender" << '\n'
         << "4. Water Bender" << '\n'
         << "Ingrese su opcion: ";
    cin>>selec;
    while ((selec!=1)&&(selec!=2)&&(selec!=3)&&(selec!=4)) {
      cout << "Opcion invalida: ";
      cin >> selec;
    }
    if (selec == 1) {
      cout << "Ingrese la cantidad de pelo: ";
      string pelo;
      cin >> pelo;
      cout << "Ingrese el numero de flechas: ";
      string flecha;
      cin >> flecha;
      lista.push_back(new AirBender(nombre,nacion,edad,sexo,pelo,flecha,poder));
    } else if (selec == 2) {
      cout << "Ingrese el numero de cicatrices: ";
      string cicatriz;
      cin >> cicatriz;
      cout << "Ingrese el numero de victorias: ";
      string victorias;
      cin >> victorias;
      lista.push_back(new FireBender(nombre,nacion,edad,sexo,cicatriz,victorias,poder));
    } else if (selec == 3) {
      cout << "Ingrese el numero de coles: ";
      string coles;
      cin >> coles;
      cout << "Ingrese el numero de graduacion: ";
      string grado;
      cin >> grado;
      lista.push_back(new FireBender(nombre,nacion,edad,sexo,coles,grado,poder));
    } else {
      cout << "Ingrese el nombre del tribu de origen: ";
      string tribu;
      cin >> tribu;
      cout << "Ingrese el arma: ";
      string arma;
      cin >> arma;
      lista.push_back(new FireBender(nombre,nacion,edad,sexo,tribu,arma,poder));
    }*/
  }else{
    cout << "Ingrese un trabajo: ";
    string trabajo;
    cin >> trabajo;
    cout << "Ingrese su fuerza: ";
    string fuerza;
    cin >> fuerza;
    cout << "Ingrese su velocidad: ";
    string velocidad;
    cin >> velocidad;
    lista.push_back(new NoBender(nombre,nacion,edad,sexo,trabajo,fuerza,velocidad));
  }
  return lista;
}
