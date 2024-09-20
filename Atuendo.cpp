#include "Atuendo.h"
using namespace std;

Atuendo::Atuendo(){
  nombre = "";
  valor = 0.0;
  peso = 0.0;
  cantidad = 0;
  favorito = false;
  proteccion = 0;
}

Atuendo::Atuendo(string aNombre, float aValor, float aPeso, int aCantidad, bool aFavorito, int aProteccion){
  nombre = aNombre;
  valor = aValor;
  peso = aPeso;
  cantidad = aCantidad;
  favorito = aFavorito;
  proteccion = aProteccion;
}

int Atuendo::getProteccion(){
  return proteccion;
}

string Atuendo::printInformacion(){
  string fav;
  if(favorito == true){
    fav = "Si";
  } else{
    fav = "No";
  }
  string msg = + "\nNombre: " + nombre + ", Valor: " + to_string(valor) + ", Peso: " + to_string(peso) + ", Cantidad: " + to_string(cantidad) +", Protección: " + to_string(proteccion) + ", Favorito: " + fav;
  return msg;
}