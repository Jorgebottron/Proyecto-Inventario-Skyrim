#include "Comida.h"
using namespace std;

Comida::Comida(){
  nombre = "";
  valor = 0.0;
  peso = 0.0;
  favorito = false;
}

Comida::Comida(string aNombre, float aValor, float aPeso, int aCantidad, bool aFavorito){
  nombre = aNombre;
  valor = aValor;
  peso = aPeso;
  cantidad = aCantidad;
  favorito = aFavorito;
}

string Comida::printInformacion(){
  string fav;
  if(favorito == true){
    fav = "Si";
  } else{
    fav = "No";
  }
  string msg = + "\nNombre: " + nombre + ", Valor: " + to_string(valor) + ", Peso: " + to_string(peso) + ", Cantidad: " + to_string(cantidad) + ", Favorito: " + fav;
  return msg;
}