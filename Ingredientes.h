#ifndef INGREDIENTES
#define INGREDIENTES
#include "Objeto.h"
#include <iostream>
#include <vector>
using namespace std;

class Ingredientes:public Objeto{
  public:
    Ingredientes();
    Ingredientes(string, float, float, int, bool);
    string printInformacion() override;
};
#endif