#include "Varios.h"
using namespace std;

Varios::Varios(){
  nombre = "";
  valor = 0.0;
  peso = 0.0;
  cantidad = 0;
  favorito = false;
}

Varios::Varios(string aNombre, float aValor, float aPeso, int aCantidad, bool aFavorito){
  nombre = aNombre;
  valor = aValor;
  peso = aPeso;
  cantidad = aCantidad;
  favorito = aFavorito;
}

string Varios::printInformacion(){
  string fav;
  if(favorito == true){
    fav = "Si";
  } else{
    fav = "No";
  }
  string msg = + "\nNombre: " + nombre + ", Valor: " + to_string(valor) + ", Peso: " + to_string(peso) + ", Cantidad: " + to_string(cantidad) + ", Favorito: " + fav;
  return msg;
}