#ifndef LLAVES
#define LLAVES
#include "Objeto.h"
#include <iostream>
#include <vector>
using namespace std;

class Llaves:public Objeto{
  public:
    Llaves();
    Llaves(string, float, float, int, bool);
    string printInformacion() override;
};
#endif