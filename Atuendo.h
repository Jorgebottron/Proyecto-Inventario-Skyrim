#ifndef ATUENDO
#define ATUENDO
#include "Objeto.h"
#include <iostream>
#include <vector>
using namespace std;

class Atuendo:public Objeto{
  private:
    int proteccion;
  public:
    Atuendo();
    Atuendo(string, float, float, int, bool, int);
    int getProteccion();
    string printInformacion() override;
};
#endif