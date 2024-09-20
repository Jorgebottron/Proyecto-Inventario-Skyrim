#include "Armas.h"
using namespace std;

Armas::Armas(){
  nombre = "";
  valor = 0.0;
  peso = 0.0;
  cantidad = 0;
  favorito = false;
  dano = 0;
}

Armas::Armas(string aNombre, float aValor, float aPeso, int aCantidad, bool aFavorito, int aDano){
  nombre = aNombre;
  valor = aValor;
  peso = aPeso;
  cantidad = aCantidad;
  favorito = aFavorito;
  dano = aDano;
}

int Armas::getDano(){
  return dano;
}

string Armas::printInformacion(){
  string fav;
  if(favorito == true){
    fav = "Si";
  } else{
    fav = "No";
  }
  string msg = + "\nNombre: " + nombre + ", Valor: " + to_string(valor) + ", Peso: " + to_string(peso) + ", Cantidad: " + to_string(cantidad) + ", Daño: " + to_string(dano) + ", Favorito: " + fav;
  return msg;
}