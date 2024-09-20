#ifndef VARIOS
#define VARIOS
#include "Objeto.h"
#include <iostream>
#include <vector>
using namespace std;

class Varios:public Objeto{
  public:
    Varios();
    Varios(string, float, float, int, bool);
    string printInformacion() override;
};
#endif