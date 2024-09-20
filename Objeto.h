#ifndef OBJETO
#define OBJETO
#include <iostream>
#include <vector>
using namespace std;

class Objeto{
  protected:
    string nombre;
    float valor;
    float peso;
    int cantidad;
    //las armas tienen una variable extra: Daño
    //las armaduras tienen una variable extra: Proteccion
    bool favorito;
  public:
    Objeto();
    Objeto(string, float, float, int, bool);
    string getNombre();
    float getValor();
    float getPeso();
    bool getFavorito();
    void setFavorito(bool);
    int getCantidad();
    void setCantidad(int);
    virtual string printInformacion() = 0;
};
#endif