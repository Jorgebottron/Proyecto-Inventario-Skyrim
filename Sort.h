#ifndef SORT
#define SORT
#include <iostream>
#include <vector>
#include "Objeto.h"
#include "Armas.h"
#include "Atuendo.h"
#include "Pociones.h"
#include "Comida.h"
#include "Ingredientes.h"
#include "Libros.h"
#include "Llaves.h"
#include "Varios.h"
using namespace std;

//En esta parte incluyo el Sort. Usé la función sort que se encuentra en la librería <algorithm>, donde esta función trabaja con una variante del Intro sort, cuya complejidad es la siguiente:
//Mejor caso: O(n log n)
//Peor caso: O(n log n)
//Caso Promedio: O(n log n)
class Sort{
  public:
    void sortNameAscendantTodos(vector<Objeto*>&);
    void sortNameDescendantTodos(vector<Objeto*>&);
    void sortValueAscendantTodos(vector<Objeto*>&);
    void sortValueDescendantTodos(vector<Objeto*>&);

    void sortNameAscendantArmas(vector<Armas*>&);
    void sortNameDescendantArmas(vector<Armas*>&);
    void sortValueAscendantArmas(vector<Armas*>&);
    void sortValueDescendantArmas(vector<Armas*>&);

    void sortNameAscendantAtuendo(vector<Atuendo*>&);
    void sortNameDescendantAtuendo(vector<Atuendo*>&);
    void sortValueAscendantAtuendo(vector<Atuendo*>&);
    void sortValueDescendantAtuendo(vector<Atuendo*>&);

    void sortNameAscendantPociones(vector<Pociones*>&);
    void sortNameDescendantPociones(vector<Pociones*>&);
    void sortValueAscendantPociones(vector<Pociones*>&);
    void sortValueDescendantPociones(vector<Pociones*>&);

    void sortNameAscendantComida(vector<Comida*>&);
    void sortNameDescendantComida(vector<Comida*>&);
    void sortValueAscendantComida(vector<Comida*>&);
    void sortValueDescendantComida(vector<Comida*>&);

    void sortNameAscendantIngredientes(vector<Ingredientes*>&);
    void sortNameDescendantIngredientes(vector<Ingredientes*>&);
    void sortValueAscendantIngredientes(vector<Ingredientes*>&);
    void sortValueDescendantIngredientes(vector<Ingredientes*>&);

    void sortNameAscendantLibros(vector<Libros*>&);
    void sortNameDescendantLibros(vector<Libros*>&);
    void sortValueAscendantLibros(vector<Libros*>&);
    void sortValueDescendantLibros(vector<Libros*>&);

    void sortNameAscendantLlaves(vector<Llaves*>&);
    void sortNameDescendantLlaves(vector<Llaves*>&);
    void sortValueAscendantLlaves(vector<Llaves*>&);
    void sortValueDescendantLlaves(vector<Llaves*>&);

    void sortNameAscendantVarios(vector<Varios*>&);
    void sortNameDescendantVarios(vector<Varios*>&);
    void sortValueAscendantVarios(vector<Varios*>&);
    void sortValueDescendantVarios(vector<Varios*>&);

    void sortDamageAscendant(vector<Armas*>&);
    void sortDamageDescendant(vector<Armas*>&);
    void sortProtectionAscendant(vector<Atuendo*>&);
    void sortProtectionDescendant(vector<Atuendo*>&);
};

#endif