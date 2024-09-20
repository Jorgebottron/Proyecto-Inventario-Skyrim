#include "Objeto.h"
using namespace std;

Objeto::Objeto(){
  nombre = "";
  valor = 0.0;
  peso = 0.0;
  cantidad = 0;
  favorito = false;
}

Objeto::Objeto(string aNombre, float aValor, float aPeso, int aCantidad, bool aFavorito){
  nombre = aNombre;
  valor = aValor;
  peso = aPeso;
  cantidad = aCantidad;
  favorito = aFavorito;
}

string Objeto::getNombre(){
  return nombre;
}

float Objeto::getValor(){
  return valor;
}

float Objeto::getPeso(){
  return peso;
}

int Objeto::getCantidad(){
  return cantidad;
}

void Objeto::setCantidad(int aCantidad){
  cantidad = aCantidad;
}

bool Objeto::getFavorito(){
  return favorito;
}

void Objeto::setFavorito(bool aFavorito){
  favorito = aFavorito;
}

string Objeto::printInformacion(){
  string fav;
  if(favorito == true){
    fav = "Si";
  } else{
    fav = "No";
  }
  string msg = + "\nNombre: " + nombre + "\nValor: " + to_string(valor) + "\nPeso: " + to_string(peso) + "\nCantidad: " + to_string(cantidad) + ", Favorito: " + fav;
  return msg;
}