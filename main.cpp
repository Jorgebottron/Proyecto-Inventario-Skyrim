#include <iostream>
#include <list>
#include "Objeto.h"
#include "Armas.h"
#include "Atuendo.h"
#include "Pociones.h"
#include "Comida.h"
#include "Ingredientes.h"
#include "Libros.h"
#include "Llaves.h"
#include "Varios.h"
#include "Sort.h"
#include "DataStructures.h"
//Donde f es de file/archivo, donde esta librería nos va a ayudar para la creación, lectura y escritura de archivos
#include <fstream>
//Librería para obtener la dirección de un archivo
#include <filesystem>
#include <stdlib.h>

using namespace std;

int main(){
  //Creo el vector principal qeu contendrá todos los objetos del usuario
  vector <Objeto*> inventario;
  //Defino objetos default que tendrá el usuario
  //Defino las armas y un vector para las armas
  Armas Arma1("Espada_de_Hierro", 60, 10, 1, false, 30);
  Armas Arma2("Maza_de_Ébano", 350, 35, 1, true, 70);
  Armas Arma3("Arco", 50, 12, 1, false, 20);
  Armas Arma4("Flechas_de_Hierro", 40, 8, 30, false, 5);
  vector <Armas*> inventarioArmas;
  inventarioArmas.push_back(&Arma1);
  inventarioArmas.push_back(&Arma2);
  inventarioArmas.push_back(&Arma3);
  inventarioArmas.push_back(&Arma4);

  //Defino los atuendos y un vector para los Atuendos
  Atuendo Atuendo1("Armadura_de_Hierro", 150, 22, 1, false, 25);
  Atuendo Atuendo2("Botas_de_Hierro", 65, 10, 1, false, 10);
  Atuendo Atuendo3("Guanteletes_de_Hierro", 70, 15, 1, false, 15);
  Atuendo Atuendo4("Yelmo_de_Hierro", 45, 10, 1, false, 12);
  Atuendo Atuendo5("Escudo_de_Hierro", 100, 20, 1, false, 50);
  vector <Atuendo*> inventarioAtuendo;
  inventarioAtuendo.push_back(&Atuendo1);
  inventarioAtuendo.push_back(&Atuendo2);
  inventarioAtuendo.push_back(&Atuendo3);
  inventarioAtuendo.push_back(&Atuendo4);
  inventarioAtuendo.push_back(&Atuendo5);

  //Defino las pociones y un vector para las pociones
  Pociones Pocion1("Poción_de_Curación_Pequeña", 17, 0.1, 1, false);
  Pociones Pocion2("Poción_de_Curación_Grande", 25, 0.5, 1, false);
  vector <Pociones*> inventarioPociones;
  inventarioPociones.push_back(&Pocion1);
  inventarioPociones.push_back(&Pocion2);

  //Defino las comidas y un vector para las comidas
  Comida Comida1("Caramelo_de_miel_de_nuez", 10, 2, 3, false);
  Comida Comida2("Aguamiel", 5, 0.5, 5, false);
  vector <Comida*> inventarioComida;
  inventarioComida.push_back(&Comida1);
  inventarioComida.push_back(&Comida2);

  //Defino los ingredientes y un vector para los ingredientes
  Ingredientes Ingrediente1("Sales_de_fuego", 20, 0.5, 4, false);
  Ingredientes Ingrediente2("Sales_de_escarcha", 25, 0.5, 3, false);
  vector <Ingredientes*> inventarioIngredientes;
  inventarioIngredientes.push_back(&Ingrediente1);
  inventarioIngredientes.push_back(&Ingrediente2);

  //Defino los libros y un vector para los libros
  Libros Libro1("El_señor_de_los_anillos", 275, 0.1, 1, false);
  vector <Libros*> inventarioLibros;
  inventarioLibros.push_back(&Libro1);

  //Defino las llaves y un vector para las llaves
  Llaves Llave1("Llave_de_Calabozo", 0.0, 0.1, 1, false);
  vector <Llaves*> inventarioLlaves;
  inventarioLlaves.push_back(&Llave1);

  //Defino los objetos que no entran en ninguna de las categorías anteriores y un vector para ellos
  Varios Vario1("Amatista", 160, 0.1, 1, false);
  Varios Vario2("Huesos_de_Dragón", 30, 550, 3, false);
  vector <Varios*> inventarioVarios;
  inventarioVarios.push_back(&Vario1);
  inventarioVarios.push_back(&Vario2);

  //Integro todos los objetos default que definí anteriormente al inventario general (también denominado TODOS)
  inventario.push_back(&Arma1);
  inventario.push_back(&Arma2);
  inventario.push_back(&Arma3);
  inventario.push_back(&Arma4);
  inventario.push_back(&Atuendo1);
  inventario.push_back(&Atuendo2);
  inventario.push_back(&Atuendo3);
  inventario.push_back(&Atuendo4);
  inventario.push_back(&Atuendo5);
  inventario.push_back(&Pocion1);
  inventario.push_back(&Pocion2);
  inventario.push_back(&Comida1);
  inventario.push_back(&Comida2);
  inventario.push_back(&Ingrediente1);
  inventario.push_back(&Ingrediente2);
  inventario.push_back(&Libro1);
  inventario.push_back(&Llave1);
  inventario.push_back(&Vario1);
  inventario.push_back(&Vario2);

  vector <Objeto*> inventarioFavoritos;
/*
  //Defino el inventario de objetos favoritos según los objetos del vector inventrio
  
  for(int i=0; i<=inventario.size(); i++){
    if (inventario[i]->getFavorito() == true){
      inventarioFavoritos.push_back(inventario[i]);
    }
  }
*/

  //Creo la acción del usuario
  string accion;
  cout << "Bienvenido, escribe cualquier número y presiona enter para empezar: " << endl;
  cin >> accion;

  //El usuario elige que acción se va a realizar según la lista de acciones disponibles
  while(accion != "n"){
    cout << "Inventario" << endl;
    cout << "¿Qué desea hacer? (Escriba el número de la acción)?" << endl;
    cout << "1. Agregar Objeto" << endl;
    cout << "2. Eliminar Objeto" << endl;
    cout << "3. Mostrar Inventario" << endl;
    cout << "4. Agregar Favorito" << endl;
    cout << "5. Quitar Favorito" << endl;
    cout << "6. Ordenar Inventario" << endl;
    cout << "7. Buscar Objeto" << endl;
    cout << "8. Crear Archivo de Texto" << endl;
    cout << "9. Importar Archivo de Texto" << endl;
    cin >> accion;

    //Se genera el código de la acción 1: agregar un objeto
    if(accion == "1"){
      //Esta parte posee una complejidad de O(1) para cada caso. Aunque contando que no trabaja con sort no se si cuente, pero sólo pregunta por el dato y lo agrega a la lista correspondiente
      cout << "¿Qué objeto desea agregar? (Arma, Atuendo, Pocion, Comida, Ingrediente, Libro, Llave, Vario)" << endl;
      cin >> accion;
      //Defino todas las variables que se van a usar para el agregado del objeto
      string nombre;
      cout << "Nombre: " << endl;
      cin >> nombre;
      
      float valor;
      cout << "Valor: " << endl;
      cin >> valor;
      
      float peso;
      cout << "Peso: " << endl;
      cin >> peso;

      int cantidad;
      cout << "Cantidad: " << endl;
      cin >> cantidad;
      
      string favorito;
      cout << "¿Favorito? (y/n)" << endl;
      cin >> favorito;
      bool favoritoBool;
      if(favorito == "y"){
        favoritoBool = true;
      } else {
        favoritoBool = false;
      }

      //Para Armas
      if(accion == "Arma"){
        //Integro la variable especial de las armas, el daño
        int dano;
        cout << "Daño: " << endl;
        cin >> dano;
        //Ciclo para agregar el objeto al inventarioel o para aumentar la cantidad si resulta que el objeto se encuentra ya en el inventario
        for(int i = 0; i<inventarioArmas.size(); i++){
          if (inventarioArmas[i]->getNombre() == nombre){
            inventarioArmas[i]->setCantidad(inventarioArmas[i]->getCantidad() + cantidad);
            break; //Para detener el for con el primer objeto repetido
          } else {
            Armas* nuevaArma = new Armas(nombre, valor, peso, 1, favoritoBool, dano);
            inventarioArmas.push_back(nuevaArma);
            break;
          }
        }
        //Para los atuendos
      } else if(accion == "Atuendo"){
        int proteccion;
        cout << "Protección: " << endl;
        cin >> proteccion;
        for(int i = 0; i<inventarioAtuendo.size(); i++){
          if (inventarioAtuendo[i]->getNombre() == nombre){
            inventarioAtuendo[i]->setCantidad(inventarioAtuendo[i]->getCantidad() + cantidad);
            break;
          } else {
            Atuendo* nuevoAtuendo = new Atuendo(nombre, valor, peso, 1, favoritoBool, proteccion);
            inventarioAtuendo.push_back(nuevoAtuendo);
            break;
          } 
          
        } 
        //Para las pociones
      } else if(accion == "Pocion"){
        for(int i = 0; i<inventarioPociones.size(); i++){
          if (inventarioPociones[i]->getNombre() == nombre){
            inventarioPociones[i]->setCantidad(inventarioPociones[i]->getCantidad() + cantidad);
            break;
          } else {
            Pociones* nuevaPocion = new Pociones(nombre, valor, peso, 1, favoritoBool);
            inventarioPociones.push_back(nuevaPocion);
            break;
          }
        }
        //Para las comidas
      } else if(accion == "Comida"){
        for(int i = 0; i<inventarioComida.size(); i++){
          if (inventarioComida[i]->getNombre() == nombre){
            inventarioComida[i]->setCantidad(inventarioComida[i]->getCantidad() + cantidad);
            break;
          } else {
            Comida* nuevaComida = new Comida(nombre, valor, peso, 1, favoritoBool);
            inventarioComida.push_back(nuevaComida);
            break;
          }
        }
        //Para los ingredientes
      } else if(accion == "Ingrediente"){
        for(int i = 0; i<inventarioIngredientes.size(); i++){
          if (inventarioIngredientes[i]->getNombre() == nombre){
            inventarioIngredientes[i]->setCantidad(inventarioIngredientes[i]->getCantidad() + cantidad);
            break;
          } else{
            Ingredientes* nuevoIngrediente = new Ingredientes(nombre, valor, peso, 1, favoritoBool);
            inventarioIngredientes.push_back(nuevoIngrediente);
            break;
          }
        }
        //Para los libros
      } else if(accion == "Libro"){
        for(int i = 0; i<inventarioLibros.size(); i++){
          if (inventarioLibros[i]->getNombre() == nombre){
            inventarioLibros[i]->setCantidad(inventarioLibros[i]->getCantidad() + cantidad);
            break;
          } else{
            Libros* nuevoLibro = new Libros(nombre, valor, peso, 1, favoritoBool);
            inventarioLibros.push_back(nuevoLibro);
            break;
          }
        }
        //Para las llaves
      } else if(accion == "Llave"){
        for(int i = 0; i<inventarioLlaves.size(); i++){
          if (inventarioLlaves[i]->getNombre() == nombre){
            inventarioLlaves[i]->setCantidad(inventarioLlaves[i]->getCantidad() + cantidad);
            break;
          } else{
            Llaves* nuevaLlave = new Llaves(nombre, valor, peso, 1, favoritoBool);
            inventarioLlaves.push_back(nuevaLlave);
            break;
          }
        }
        //Para los objetos que no entran en ninguna de las categorías anteriores
      } else if(accion == "Vario"){
        for(int i = 0; i<inventarioVarios.size(); i++){
          if (inventarioVarios[i]->getNombre() == nombre){
            inventarioVarios[i]->setCantidad(inventarioVarios[i]->getCantidad() + cantidad);
            break;
          } else{
            Varios* nuevoVario = new Varios(nombre, valor, peso, 1, favoritoBool);
            inventarioVarios.push_back(nuevoVario);
            break;
          }
        }
        //Situación base por si el usuario escribe algo diferente a la opciones disponibles
      } else{
        cout << "Categoría no encontrada" << endl;
      }
    } else if(accion == "2"){
      //La complejidad de esta parte ya es diferente a la anterior pues en el mejor de los casos puede encontrar el objeto que queremos eliminar a la primera o tiene que recorrer toda la lista para encontrarlo. Así que la complejidad sería:
      //Mejor caso: O(1)
      //Peor caso: O(n)
      //Caso promedio: O(n) (versión simplificada de O(n/2))
      cout << "¿Qué tipo de objeto desea eliminar? (Arma, Atuendo, Pocion, Comida, Ingrediente, Libro, Llave, Vario)" << endl;
      cin >> accion;
      //Defino la variable borrar donde se guardará el nombre del objeto que se quiere eliminar
      string borrar;
      cout << "¿Qué objeto desea eliminar? (Escribe el nombre del objeto)" << endl;
      cin >> borrar;
      //Para borrar una arma
      if(accion == "Arma"){
        for(int i = 0; i<inventarioArmas.size(); i++){
          if (inventarioArmas[i]->getNombre() == borrar){
            if(inventarioArmas[i]->getCantidad() > 0){
              inventarioArmas[i]->setCantidad(inventarioArmas[i]->getCantidad() - 1);
            } else if(inventarioArmas[i]->getCantidad() <= 0){
              inventarioArmas.erase(inventarioArmas.begin() + i);
            }
          }
        }
        //Para borrar un atuendo
      } else if(accion == "Atuendo"){
        for(int i = 0; i<inventarioAtuendo.size(); i++){
          if (inventarioAtuendo[i]->getNombre() == borrar){
            if(inventarioAtuendo[i]->getCantidad() > 0){
              inventarioAtuendo[i]->setCantidad(inventarioAtuendo[i]->getCantidad() - 1);
            } else if(inventarioAtuendo[i]->getCantidad() <= 0){
              inventarioAtuendo.erase(inventarioAtuendo.begin() + i);
            }
          }
        }
        //Para borrar una pocion
      } else if(accion == "Pocion"){
        for(int i = 0; i<inventarioPociones.size(); i++){
          if (inventarioPociones[i]->getNombre() == borrar){
            if(inventarioPociones[i]->getCantidad() > 0){
              inventarioPociones[i]->setCantidad(inventarioPociones[i]->getCantidad() - 1);
            } else if(inventarioPociones[i]->getCantidad() <= 0){
              inventarioPociones.erase(inventarioPociones.begin() + i);
            }
          }
        }
        //Para borrar una comida
      } else if(accion == "Comida"){
        for(int i = 0; i<inventarioComida.size(); i++){
          if (inventarioComida[i]->getNombre() == borrar){
            if(inventarioComida[i]->getCantidad() > 0){
              inventarioComida[i]->setCantidad(inventarioComida[i]->getCantidad() - 1);
            } else if(inventarioComida[i]->getCantidad() <= 0){
              inventarioComida.erase(inventarioComida.begin() + i);
            }
          }
        }
        //Para borrar un ingrediente
      } else if(accion == "Ingrediente"){
        for(int i = 0; i<inventarioIngredientes.size(); i++){
          if (inventarioIngredientes[i]->getNombre() == borrar){
            if(inventarioIngredientes[i]->getCantidad() > 0){
              inventarioIngredientes[i]->setCantidad(inventarioIngredientes[i]->getCantidad() - 1);
            } else if(inventarioIngredientes[i]->getCantidad() <= 0){
              inventarioIngredientes.erase(inventarioIngredientes.begin() + i);
            }
          }
        }
        //Para borrar un libro
      } else if(accion == "Libro"){
        for(int i = 0; i<inventarioLibros.size(); i++){
          if (inventarioLibros[i]->getNombre() == borrar){
            if(inventarioLibros[i]->getCantidad() > 0){
              inventarioLibros[i]->setCantidad(inventarioLibros[i]->getCantidad() - 1);
            } else if(inventarioLibros[i]->getCantidad() <= 0){
              inventarioLibros.erase(inventarioLibros.begin() + i);
            }
          }
        }
        //Para borrar una llave
      } else if(accion == "Llave"){
        for(int i = 0; i<inventarioLlaves.size(); i++){
          if (inventarioLlaves[i]->getNombre() == borrar){
            if(inventarioLlaves[i]->getCantidad() > 0){
              inventarioLlaves[i]->setCantidad(inventarioLlaves[i]->getCantidad() - 1);
            } else if(inventarioLlaves[i]->getCantidad() <= 0){
              inventarioLlaves.erase(inventarioLlaves.begin() + i);
            }
          }
        }
        //Para borrar un objeto que no entra en ninguna de las categorías anteriores
      } else if(accion == "Vario"){
        for(int i = 0; i<inventarioVarios.size(); i++){
          if (inventarioVarios[i]->getNombre() == borrar){
            if(inventarioVarios[i]->getCantidad() > 0){
              inventarioVarios[i]->setCantidad(inventarioVarios[i]->getCantidad() - 1);
            } else if(inventarioVarios[i]->getCantidad() <= 0){
              inventarioVarios.erase(inventarioVarios.begin() + i);
            }
          }
        }
        //Situación base por si el usuario escribe algo diferente a la opciones disponibles
      } else{
        cout << "Categoría no encontrada" << endl;
      }
    } else if(accion == "3"){
      //Este caso es como el primero, pero aquí se recorren todos los objetos y se imprimen, por lo que la complejidad de cualquier caso sería de O(n) justo porque se debe recorrer toda la lista para la impresión de los datos
      cout << "¿Qué categoría quieres ver? (Todos, Armas, Atuendo, Poción, Comida, Ingrediente, Libro, Llave, Vario)" << endl;
      cin >> accion;
      if(accion == "Armas"){
        for(int i = 0; i<inventarioArmas.size(); i++){
          cout << inventarioArmas[i]->printInformacion() << endl;
        } 
      } else if(accion == "Atuendo"){
        for(int i = 0; i<inventarioAtuendo.size(); i++){
          cout << inventarioAtuendo[i]->printInformacion() << endl;
        }
      } else if(accion == "Pocion"){
        for(int i = 0; i<inventarioPociones.size(); i++){
          cout << inventarioPociones[i]->printInformacion() << endl;
        }
      } else if(accion == "Comida"){
        for(int i = 0; i<inventarioComida.size(); i++){
          cout << inventarioComida[i]->printInformacion() << endl;
        }
      } else if(accion == "Ingrediente"){
        for(int i = 0; i<inventarioIngredientes.size(); i++){
          cout << inventarioIngredientes[i]->printInformacion() << endl;
        }
      } else if(accion == "Libro"){
        for(int i = 0; i<inventarioLibros.size(); i++){
          cout << inventarioLibros[i]->printInformacion() << endl;
        }
      } else if(accion == "Llave"){
        for(int i = 0; i<inventarioLlaves.size(); i++){
          cout << inventarioLlaves[i]->printInformacion() << endl;
        }
      } else if(accion == "Vario"){
        for(int i = 0; i<inventarioVarios.size(); i++){
          cout << inventarioVarios[i]->printInformacion() << endl;
        }
      } else if(accion == "Todos"){
        for(int i = 0; i<inventario.size(); i++){
          cout << inventario[i]->printInformacion() << endl;
        }
      }
      
      //Cuando el usuario escoge Agregar Favorito
    } else if(accion == "4"){
      //La complejidad de esta parte se parece más a la de quitar objeto, pues hay que buscar un objeto y cambiar su valor de favorito a verdadero, por lo que la complejidad sería:
      //Mejor caso: O(1)
      //Peor caso: O(n)
      //Caso promedio: O(n) (versión simplificada de O(n/2))
      string nombre;
      cout << "¿Qué objeto quieres volver favorito? (Ingresa el nombre)" << endl;
      cin >> nombre;
      //Se busca el objeto en el inventario
      for(int i=0; i<inventario.size(); i++){
        if(inventario[i]->getNombre() == nombre){
          inventario[i]->setFavorito(true); //Cambiamos su estado a favortio
      } else if( i >= inventario.size() && inventario[i]->getNombre() != nombre){
          cout << "Objeto no encontrado" << endl;
      }
    }
      //Se verifica si ya está entre los favoritos
        for(int i=0; i<inventarioFavoritos.size(); i++){
          if(inventarioFavoritos[i]->getNombre() == nombre){
            if(inventarioFavoritos[i]->getCantidad() > 0){
            inventarioFavoritos[i]->setCantidad(inventarioFavoritos[i]->getCantidad() + 1);
              break;
            } 
          } else if(inventarioFavoritos[i]->getCantidad() <= 0){
            inventarioFavoritos.push_back(inventario[i]);
            cout << nombre << " ha sido añadido a tus favoritos!" << endl;
            break;
        } 
      } 
  } else if(accion == "5"){
      string nombre;
      //Lo mismo que el caso anterior pero donde se le cambia el valor de favorito a falso:
      //Mejor caso: O(1)
      //Peor caso: O(n)
      //Caso promedio: O(n) (versión simplificada de O(n/2))
        cout << "¿Qué objeto quieres quitar de favorito? (Ingresa el nombre)" << endl;
        cin >> nombre;
        //Se busca el objeto en el inventario
        for(int i=0; i<inventario.size(); i++){
          if(inventario[i]->getNombre() == nombre){
            cout << inventario[i]->getFavorito() << endl;
            inventario[i]->setFavorito(false); //Cambiamos su estado a NO favortio
            cout << inventario[i]->getFavorito() << endl;
        } else if( i >= inventario.size() && inventario[i]->getNombre() != nombre){
            cout << "Objeto no encontrado" << endl;
        }
      }
        //Se verifica si ya está entre los favoritos
          for(int i=0; i<inventarioFavoritos.size(); i++){
            if(inventarioFavoritos[i]->getNombre() == nombre){
              if(inventarioFavoritos[i]->getCantidad() > 0){
              inventarioFavoritos[i]->setCantidad(inventarioFavoritos[i]->getCantidad() - 1);
                break;
              } 
            } else if(inventarioFavoritos[i]->getCantidad() <= 0){
              inventario.erase(inventario.begin() + i);
              cout << nombre << " ha sido eliminado de tus favoritos!" << endl;
              break;
          } 
        }
  } else if(accion == "6"){
      //En esta parte incluyo el Sort. Usé la función sort que se encuentra en la librería <algorithm>, donde esta función trabaja con una variante del Intro sort, cuya complejidad es la siguiente:
      //Mejor caso: O(n log n)
      //Peor caso: O(n log n)
      //Caso Promedio: O(n log n)
      Sort sorter;
      cout << "¿Cómo quieres ordenar tu inventario? (Nombre, Valor, Daño, Protección, BST_Arma(Àrbol de Bùsqueda Binaria para Armas)" << endl;
      cin >> accion;
      cout << "¿De forma Ascendente o Descendente?" << endl;
      string orden;
      cin >> orden;
      if (accion == "Nombre") {
          if (orden == "Ascendente") {
              sorter.sortNameAscendantTodos(inventario);
              sorter.sortNameAscendantArmas(inventarioArmas);
              sorter.sortNameAscendantAtuendo(inventarioAtuendo);
              sorter.sortNameAscendantPociones(inventarioPociones);
              sorter.sortNameAscendantComida(inventarioComida);
              sorter.sortNameAscendantIngredientes(inventarioIngredientes);
              sorter.sortNameAscendantLibros(inventarioLibros);
              sorter.sortNameAscendantLlaves(inventarioLlaves);
              sorter.sortNameAscendantVarios(inventarioVarios);
          } else if (orden == "Descendente") {
              sorter.sortNameDescendantTodos(inventario);
              sorter.sortNameDescendantArmas(inventarioArmas);
              sorter.sortNameDescendantAtuendo(inventarioAtuendo);
              sorter.sortNameDescendantPociones(inventarioPociones);
              sorter.sortNameDescendantComida(inventarioComida);
              sorter.sortNameDescendantIngredientes(inventarioIngredientes);
              sorter.sortNameDescendantLibros(inventarioLibros);
              sorter.sortNameDescendantLlaves(inventarioLlaves);
              sorter.sortNameDescendantVarios(inventarioVarios);
          }
      } else if(accion == "Valor"){
        if (orden == "Ascendente") {
          sorter.sortValueAscendantTodos(inventario);
        } else if (orden == "Descendente") {
          sorter.sortValueDescendantTodos(inventario);
        }
      } else if(accion == "Daño"){
        if (orden == "Ascendente") {
          sorter.sortDamageAscendant(inventarioArmas);
        } else if (orden == "Descendente") {
          sorter.sortDamageDescendant(inventarioArmas);
        }
      } else if(accion == "Protección"){
        if (orden == "Ascendente") {
          sorter.sortProtectionAscendant(inventarioAtuendo);
        } else if (orden == "Descendente") {
          sorter.sortProtectionDescendant(inventarioAtuendo);
        } 
      } else if(accion == "BST_Arma"){ 
        // Creo un árbol de búsqueda binaria para las armas
        BST<Armas*> bstArmas;
        // Agrego las armas al BST
        for (Armas* arma : inventarioArmas) {
            bstArmas.add(arma);
        }
        if (orden == "Ascendente") {
          cout << bstArmas.visit();
        } else if (orden == "Descendente") {
          cout << bstArmas.visitDescendant();
        }
      } else{
        cout << "Opción invalida" << endl;
      }
        
  } else if(accion == "7") {
    DList<Objeto*> DListInventario;
    for (int i=0; i<inventario.size(); i++){
      DListInventario.add(inventario[i]);
    }
  //Implemento listas doblemente enlazadas para usarlas en la búsqueda de objetos.
  //Esta implementación de búsqueda tiene la siguiente dificultad:
  //Mejor caso: O(1)
  //Peor caso: O(n)
  //Caso Promedio: O(n)
    string nombreBuscar;
    cout << "Escriba el nombre del objeto que desea buscar: " << endl;
    cin >> nombreBuscar;
    // Variable para verificar si el objeto fue encontrado
    bool encontrado = false;
    // Buscamos en el inventario usando el método get()
    for (int i = 0; i < DListInventario.lenght(); i++) {
      if (DListInventario.get(i)->getNombre() == nombreBuscar) {
        cout << "Objeto encontrado!: " << endl;
        cout << DListInventario.get(i)->printInformacion() << endl; // Mostrar información del objeto
        cout << "Ubicación en el inventario: " << (i + 1) << endl; // Mostrar la posición (i + 1 para empezar desde 1)
        encontrado = true;
        break; // Detenemos la búsqueda después de encontrar el objeto
      }
    }
    if (!encontrado) {
        cout << "El objeto no fue encontrado en el inventario." << endl;
    }
  } else if (accion == "8"){
    // Crear y escribir en un archivo de texto la información de los objetos en el inventario
      // Para mostrarle al usuario la ruta completa donde guarda su archivo
      /* 
      En resúmen, no genera una liga de la computadora actual,
      sino que regresa una ruta en línea. Pero si tiene un 
      compilador de c++ (como Replit), se le debería aparecer 
      el .txt de nombre inventario entre los archivos del proyecto
      */
      string ruta = filesystem::current_path().string() + "/inventario.txt"; 
      ofstream archivo("inventario.txt");
      if (archivo.fail()) {
        cout << "No se pudo crear/abrir el archivo" << endl;
        exit(1);;
      }
      // Escribe los nombres de los objetos en el archivo
      for (int i=0; i < inventario.size(); i++) {
        //Para imprimir la información de todos los objetos del inventario
        archivo << inventario[i]->printInformacion() << endl;
      }
      archivo.close();
      cout << "Inventario: " << endl;
      cout << "El inventario ha sido guardado en la ruta: " << ruta << "'" << endl; // Muestra la ruta al usuario

    //Para importar información de un archivo de texto (.txt) a los vectores del programa
  } else if (accion == "9") {
      // Pido la ruta del archivo a importar
      string rutaArchivo;
      cout << "Ingresa la ruta del archivo a importar: ";
      cin >> rutaArchivo;

      // Se abre el archivo para lectura
      ifstream archivo(rutaArchivo);
      
      if (archivo.fail()) {
          cout << "No se pudo abrir el archivo" << endl;
          continue; // Salta esta iteración y vuelve a pedir la acción
      }

      // Para leer los objetos desde el archivo y agregarlos al inventario
      string linea;
      while (getline(archivo, linea)) {
          if (!linea.empty()) {
              stringstream ss(linea);
              string tipo, nombreObjeto;
              float valorObjeto, pesoObjeto;
              int cantidadObjeto;
              bool favoritoObjeto;
              int danoArma, proteccionAtuendo;

              ss >> tipo >> nombreObjeto >> valorObjeto >> pesoObjeto >> cantidadObjeto >> favoritoObjeto;

              if (tipo == "Arma") {
                  ss >> danoArma;
                  inventario.push_back(new Armas(nombreObjeto, valorObjeto, pesoObjeto, cantidadObjeto, favoritoObjeto, danoArma));
                  inventarioArmas.push_back(new Armas(nombreObjeto, valorObjeto, pesoObjeto, cantidadObjeto, favoritoObjeto, danoArma));
              } else if (tipo == "Atuendo") {
                  ss >> proteccionAtuendo;
                  inventario.push_back(new Atuendo(nombreObjeto, valorObjeto, pesoObjeto, cantidadObjeto, favoritoObjeto, proteccionAtuendo));
                  inventarioAtuendo.push_back(new Atuendo(nombreObjeto, valorObjeto, pesoObjeto, cantidadObjeto, favoritoObjeto, proteccionAtuendo));
              } else if (tipo == "Pocion") {
                  inventario.push_back(new Pociones(nombreObjeto, valorObjeto, pesoObjeto, cantidadObjeto, favoritoObjeto));
                  inventarioPociones.push_back(new Pociones(nombreObjeto, valorObjeto, pesoObjeto, cantidadObjeto, favoritoObjeto));
              } else if (tipo == "Comida") {
                  inventario.push_back(new Comida(nombreObjeto, valorObjeto, pesoObjeto, cantidadObjeto, favoritoObjeto));
                  inventarioComida.push_back(new Comida(nombreObjeto, valorObjeto, pesoObjeto, cantidadObjeto, favoritoObjeto));
              } else if (tipo == "Ingrediente") {
                  inventario.push_back(new Ingredientes(nombreObjeto, valorObjeto, pesoObjeto, cantidadObjeto, favoritoObjeto));
                  inventarioIngredientes.push_back(new Ingredientes(nombreObjeto, valorObjeto, pesoObjeto, cantidadObjeto, favoritoObjeto));
              } else if (tipo == "Libro") {
                  inventario.push_back(new Libros(nombreObjeto, valorObjeto, pesoObjeto, cantidadObjeto, favoritoObjeto));
                  inventarioLibros.push_back(new Libros(nombreObjeto, valorObjeto, pesoObjeto, cantidadObjeto, favoritoObjeto));
              } else if (tipo == "Llave") {
                  inventario.push_back(new Llaves(nombreObjeto, valorObjeto, pesoObjeto, cantidadObjeto, favoritoObjeto));
                  inventarioLlaves.push_back(new Llaves(nombreObjeto, valorObjeto, pesoObjeto, cantidadObjeto, favoritoObjeto));
              } else if (tipo == "Varios") {
                  inventario.push_back(new Varios(nombreObjeto, valorObjeto, pesoObjeto, cantidadObjeto, favoritoObjeto));
                  inventarioVarios.push_back(new Varios(nombreObjeto, valorObjeto, pesoObjeto, cantidadObjeto, favoritoObjeto));
              }
          }
        }
        archivo.close();
        cout << "Los objetos han sido importados al inventario." << endl;
      }  
    }

    // Para ver si el usuario quiere realizar alguna otra acción
    cout << "¿Deseas hacer algo más? (y/n)\n" << endl;
    cin >> accion;

    // Para terminar el programa
    cout << "Saliendo del inventario..." << endl;
    return 0;

}