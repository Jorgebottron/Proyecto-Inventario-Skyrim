#ifndef COMIDA
#define COMIDA
#include "Objeto.h"
#include <iostream>
#include <vector>
using namespace std;

class Comida:public Objeto{
  public:
    Comida();
    Comida(string, float, float, int, bool);
    string printInformacion() override;
};
#endif