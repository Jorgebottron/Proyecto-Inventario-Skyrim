#ifndef LIBROS
#define LIBROS
#include "Objeto.h"
#include <iostream>
#include <vector>
using namespace std;

class Libros:public Objeto{
  public:
    Libros();
    Libros(string, float, float, int, bool);
    string printInformacion() override;
};
#endif