#include "Sort.h"
#include <algorithm>

void Sort::sortNameAscendantTodos(vector<Objeto*>& inventario) {
    sort(inventario.begin(), inventario.end(), [](Objeto* a, Objeto* b) {
        return a->getNombre() < b->getNombre(); // Asegúrate de que Objeto tenga el método getNombre()
    });
}

void Sort::sortNameDescendantTodos(vector<Objeto*>& inventario) {
    sort(inventario.begin(), inventario.end(), [](Objeto* a, Objeto* b) {
        return a->getNombre() > b->getNombre(); // Asegúrate de que Objeto tenga el método getNombre()
    });
}

void Sort::sortValueAscendantTodos(vector<Objeto*>& inventario) {
    sort(inventario.begin(), inventario.end(), [](Objeto* a, Objeto* b) {
        return a->getValor() < b->getValor(); // Asegúrate de que Objeto tenga el método getValor()
    });
}

void Sort::sortValueDescendantTodos(vector<Objeto*>& inventario) {
    sort(inventario.begin(), inventario.end(), [](Objeto* a, Objeto* b) {
        return a->getValor() > b->getValor(); // Asegúrate de que Objeto tenga el método getValor()
    });
}

void Sort::sortNameAscendantArmas(vector<Armas*>& inventarioArmas) {
    sort(inventarioArmas.begin(), inventarioArmas.end(), [](Armas* a, Armas* b) {
        return a->getNombre() < b->getNombre(); // Asegúrate de que Objeto tenga el método getNombre()
    });
}

void Sort::sortNameDescendantArmas(vector<Armas*>& inventarioArmas) {
    sort(inventarioArmas.begin(), inventarioArmas.end(), [](Armas* a, Armas* b) {
        return a->getNombre() > b->getNombre(); // Asegúrate de que Objeto tenga el método getNombre()
    });
}

void Sort::sortValueAscendantArmas(vector<Armas*>& inventarioArmas) {
    sort(inventarioArmas.begin(), inventarioArmas.end(), [](Armas* a, Armas* b) {
        return a->getValor() < b->getValor(); // Asegúrate de que Objeto tenga el método getValor()
    });
}

void Sort::sortValueDescendantArmas(vector<Armas*>& inventarioArmas) {
    sort(inventarioArmas.begin(), inventarioArmas.end(), [](Armas* a, Armas* b) {
        return a->getValor() > b->getValor(); // Asegúrate de que Objeto tenga el método getValor()
    });
}

void Sort::sortNameAscendantAtuendo(vector<Atuendo*>& inventarioAtuendo) {
    sort(inventarioAtuendo.begin(), inventarioAtuendo.end(), [](Atuendo* a, Atuendo* b) {
        return a->getNombre() < b->getNombre(); // Asegúrate de que Objeto tenga el método getNombre()
    });
}

void Sort::sortNameDescendantAtuendo(vector<Atuendo*>& inventarioAtuendo) {
    sort(inventarioAtuendo.begin(), inventarioAtuendo.end(), [](Atuendo* a, Atuendo* b) {
        return a->getNombre() > b->getNombre(); // Asegúrate de que Objeto tenga el método getNombre()
    });
}

void Sort::sortValueAscendantAtuendo(vector<Atuendo*>& inventarioAtuendo) {
    sort(inventarioAtuendo.begin(), inventarioAtuendo.end(), [](Atuendo* a, Atuendo* b) {
        return a->getValor() < b->getValor(); // Asegúrate de que Objeto tenga el método getValor()
    });
}

void Sort::sortValueDescendantAtuendo(vector<Atuendo*>& inventarioAtuendo) {
    sort(inventarioAtuendo.begin(), inventarioAtuendo.end(), [](Atuendo* a, Atuendo* b) {
        return a->getValor() > b->getValor(); // Asegúrate de que Objeto tenga el método getValor()
    });
}

void Sort::sortNameAscendantPociones(vector<Pociones*>& inventarioPociones) {
    sort(inventarioPociones.begin(), inventarioPociones.end(), [](Pociones* a, Pociones* b) {
        return a->getNombre() < b->getNombre(); // Asegúrate de que Objeto tenga el método getNombre()
    });
}

void Sort::sortNameDescendantPociones(vector<Pociones*>& inventarioPociones) {
    sort(inventarioPociones.begin(), inventarioPociones.end(), [](Pociones* a, Pociones* b) {
        return a->getNombre() > b->getNombre(); // Asegúrate de que Objeto tenga el método getNombre()
    });
}

void Sort::sortValueAscendantPociones(vector<Pociones*>& inventarioPociones) {
    sort(inventarioPociones.begin(), inventarioPociones.end(), [](Pociones* a, Pociones* b) {
        return a->getValor() < b->getValor(); // Asegúrate de que Objeto tenga el método getValor()
    });
}

void Sort::sortValueDescendantPociones(vector<Pociones*>& inventarioPociones) {
    sort(inventarioPociones.begin(), inventarioPociones.end(), [](Pociones* a, Pociones* b) {
        return a->getValor() > b->getValor(); // Asegúrate de que Objeto tenga el método getValor()
    });
}

void Sort::sortNameAscendantComida(vector<Comida*>& inventarioComida) {
    sort(inventarioComida.begin(), inventarioComida.end(), [](Comida* a, Comida* b) {
        return a->getNombre() < b->getNombre(); // Asegúrate de que Objeto tenga el método getNombre()
    });
}

void Sort::sortNameDescendantComida(vector<Comida*>& inventarioComida) {
    sort(inventarioComida.begin(), inventarioComida.end(), [](Comida* a, Comida* b) {
        return a->getNombre() > b->getNombre(); // Asegúrate de que Objeto tenga el método getNombre()
    });
}

void Sort::sortValueAscendantComida(vector<Comida*>& inventarioComida) {
    sort(inventarioComida.begin(), inventarioComida.end(), [](Comida* a, Comida* b) {
        return a->getValor() < b->getValor(); // Asegúrate de que Objeto tenga el método getValor()
    });
}

void Sort::sortValueDescendantComida(vector<Comida*>& inventarioComida) {
    sort(inventarioComida.begin(), inventarioComida.end(), [](Comida* a, Comida* b) {
        return a->getValor() > b->getValor(); // Asegúrate de que Objeto tenga el método getValor()
    });
}

void Sort::sortNameAscendantIngredientes(vector<Ingredientes*>& inventarioIngredientes) {
    sort(inventarioIngredientes.begin(), inventarioIngredientes.end(), [](Ingredientes* a, Ingredientes* b) {
        return a->getNombre() < b->getNombre(); // Asegúrate de que Objeto tenga el método getNombre()
    });
}

void Sort::sortNameDescendantIngredientes(vector<Ingredientes*>& inventarioIngredientes) {
    sort(inventarioIngredientes.begin(), inventarioIngredientes.end(), [](Ingredientes* a, Ingredientes* b) {
        return a->getNombre() > b->getNombre(); // Asegúrate de que Objeto tenga el método getNombre()
    });
}

void Sort::sortValueAscendantIngredientes(vector<Ingredientes*>& inventarioIngredientes) {
    sort(inventarioIngredientes.begin(), inventarioIngredientes.end(), [](Ingredientes* a, Ingredientes* b) {
        return a->getValor() < b->getValor(); // Asegúrate de que Objeto tenga el método getValor()
    });
}

void Sort::sortValueDescendantIngredientes(vector<Ingredientes*>& inventarioIngredientes) {
    sort(inventarioIngredientes.begin(), inventarioIngredientes.end(), [](Ingredientes* a, Ingredientes* b) {
        return a->getValor() > b->getValor(); // Asegúrate de que Objeto tenga el método getValor()
    });
}

void Sort::sortNameAscendantLibros(vector<Libros*>& inventarioLibros) {
    sort(inventarioLibros.begin(), inventarioLibros.end(), [](Libros* a, Libros* b) {
        return a->getNombre() < b->getNombre(); // Asegúrate de que Objeto tenga el método getNombre()
    });
}

void Sort::sortNameDescendantLibros(vector<Libros*>& inventarioLibros) {
    sort(inventarioLibros.begin(), inventarioLibros.end(), [](Libros* a, Libros* b) {
        return a->getNombre() > b->getNombre(); // Asegúrate de que Objeto tenga el método getNombre()
    });
}

void Sort::sortValueAscendantLibros(vector<Libros*>& inventarioLibros) {
    sort(inventarioLibros.begin(), inventarioLibros.end(), [](Libros* a, Libros* b) {
        return a->getValor() < b->getValor(); // Asegúrate de que Objeto tenga el método getValor()
    });
}

void Sort::sortValueDescendantLibros(vector<Libros*>& inventarioLibros) {
    sort(inventarioLibros.begin(), inventarioLibros.end(), [](Libros* a, Libros* b) {
        return a->getValor() > b->getValor(); // Asegúrate de que Objeto tenga el método getValor()
    });
}

void Sort::sortNameAscendantLlaves(vector<Llaves*>& inventarioLlaves) {
    sort(inventarioLlaves.begin(), inventarioLlaves.end(), [](Llaves* a, Llaves* b) {
        return a->getNombre() < b->getNombre(); // Asegúrate de que Objeto tenga el método getNombre()
    });
}

void Sort::sortNameDescendantLlaves(vector<Llaves*>& inventarioLlaves) {
    sort(inventarioLlaves.begin(), inventarioLlaves.end(), [](Llaves* a, Llaves* b) {
        return a->getNombre() > b->getNombre(); // Asegúrate de que Objeto tenga el método getNombre()
    });
}

void Sort::sortValueAscendantLlaves(vector<Llaves*>& inventarioLlaves) {
    sort(inventarioLlaves.begin(), inventarioLlaves.end(), [](Llaves* a, Llaves* b) {
        return a->getValor() < b->getValor(); // Asegúrate de que Objeto tenga el método getValor()
    });
}

void Sort::sortValueDescendantLlaves(vector<Llaves*>& inventarioLlaves) {
    sort(inventarioLlaves.begin(), inventarioLlaves.end(), [](Llaves* a, Llaves* b) {
        return a->getValor() > b->getValor(); // Asegúrate de que Objeto tenga el método getValor()
    });
}

void Sort::sortNameAscendantVarios(vector<Varios*>& inventarioVarios) {
    sort(inventarioVarios.begin(), inventarioVarios.end(), [](Varios* a, Varios* b) {
        return a->getNombre() < b->getNombre(); // Asegúrate de que Objeto tenga el método getNombre()
    });
}

void Sort::sortNameDescendantVarios(vector<Varios*>& inventarioVarios) {
    sort(inventarioVarios.begin(), inventarioVarios.end(), [](Varios* a, Varios* b) {
        return a->getNombre() > b->getNombre(); // Asegúrate de que Objeto tenga el método getNombre()
    });
}

void Sort::sortValueAscendantVarios(vector<Varios*>& inventarioVarios) {
    sort(inventarioVarios.begin(), inventarioVarios.end(), [](Varios* a, Varios* b) {
        return a->getValor() < b->getValor(); // Asegúrate de que Objeto tenga el método getValor()
    });
}

void Sort::sortValueDescendantVarios(vector<Varios*>& inventarioVarios) {
    sort(inventarioVarios.begin(), inventarioVarios.end(), [](Varios* a, Varios* b) {
        return a->getValor() > b->getValor(); // Asegúrate de que Objeto tenga el método getValor()
    });
}

void Sort::sortDamageAscendant(vector<Armas*>& inventarioArmas) {
    sort(inventarioArmas.begin(), inventarioArmas.end(), [](Armas* a, Armas* b) {
        return a->getDano() < b->getDano();
    });
}

void Sort::sortDamageDescendant(vector<Armas*>& inventarioArmas) {
    sort(inventarioArmas.begin(), inventarioArmas.end(), [](Armas* a, Armas* b) {
        return a->getDano() > b->getDano();
    });
}

void Sort::sortProtectionAscendant(vector<Atuendo*>& inventarioAtuendo) {
    sort(inventarioAtuendo.begin(), inventarioAtuendo.end(), [](Atuendo* a, Atuendo* b) {
        return a->getProteccion() < b->getProteccion();
    });
}

void Sort::sortProtectionDescendant(vector<Atuendo*>& inventarioAtuendo) {
    sort(inventarioAtuendo.begin(), inventarioAtuendo.end(), [](Atuendo* a, Atuendo* b) {
        return a->getProteccion() > b->getProteccion();
    });
}