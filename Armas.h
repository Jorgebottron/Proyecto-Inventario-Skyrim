#ifndef ARMAS
#define ARMAS
#include "Objeto.h"
#include <iostream>
#include <vector>
using namespace std;

class Armas:public Objeto{
  private:
    int dano;
    int cantidad;
  public:
    Armas();
    Armas(string, float, float, int, bool, int);
    int getDano();
    string printInformacion() override;
};
#endif