#ifndef POCIONES
#define POCIONES
#include "Objeto.h"
#include <iostream>
#include <vector>
using namespace std;

class Pociones:public Objeto{
  public:
    Pociones();
    Pociones(string, float, float, int, bool);
    string printInformacion() override;
};
#endif