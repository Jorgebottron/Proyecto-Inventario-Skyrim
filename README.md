# Proyecto: Inventario de Skyrim
Un programa inspirado en el inventario del famoso juego The Elder Scrolls V: Skyrim, donde intento recrear el inventario utilizando técnicas como código orientado a objetos y aplicar varios tipos de funciones que incluyen funciones de tipo Sort o de Estructuras de Datos por ejemplo. Donde el usuario podrá revisar el inventario según las diferentes categorías de objetos, guardar y eliminar objetos, agregar y quitar favoritos, ordenar el inventario según su conveniencia, buscar un objeto en específico y crear o recibir archivos de texto para guardar o importar objetos en el inventario.

# El programa
El programa mostrará un menú donde el usuario podrá interactuar para seleccionar qué acción desea realizar, teniendo siete opciones:
1. Agregar objeto
2. Eliminar objeto
3. Mostrar inventario
4. Agregar favorito
5. Eliminar favorito
6. Ordenar inventario
7. Buscar objeto
8. Crear Archivo de Texto
9. Importar Archivo de Texto
10. Salir del Inventario

## Descripción del Avance 1
En este primer avance incluyo todas las clases con las que voy a trabajar, junto con la clase Sort, que es la más importante en este avance, ya que fue solicitada específicamente. Aparte de eso, en el main hay un menú donde los usuarios pueden interactuar para decidir qué acción quieren que realice el programa.

## Descripción del Avance 2
En este segundo avance, incluyo la aplicación de estructuras de datos a mi programa. Para esto, creo un nuevo archivo llamado "DataStructures.h", donde incluyo las siguientes funciones:
1. Lista Doblemente Enlazada: Que se usa para la nueva funciòn de bùsqueda, que en el menù serìa la funciòn 7. Busca en la lista del inventario el nombre del objeto que estàs buscando, y, si lo encuentra, devuelve la infromaciòn del objeto junto con su ubicaciòn en el inventario (que serìa su ubicaciòn en la lista de Inventario".
2. Árboles de Bùsqueda Binaria: Donde, a pesar de que su nombre es Árbol de Búsqueda, realmente lo uso para añadir una nueva función a la función 6 de ordenar los datos, donde viene la nueva opción de ordenarlos en ordenes de tipo Postorder, Inorder, Preorder y Level By Level (aplicable sólo para la forma ascendente, pues en la descendente sólo agregué un sólo ordenamiento).
Aparte de añadir todo esto esto, no mofico mucho el main más que sólo para agregar estas nuevas funciones, y el resto de los archivos .h y .cpp se mantienen igual.

## Descripción del Avance 3
En este tercer avance genero un análisis detallado actualizado de cada una de las funciones del programa (pues no puedo sacarle una complejidad definitiva para todo el programa, sino que esta debe venir según los componentes del proyecto, y si sacara una complejidad total tendría que ser la de la función con mayor dificultad). 
Aparte, implemento dos nuevas funciones: 
1. La función 8 sirve para crear archivos de texto según la información almacenada en el Inventario del usuario, de modo que, cuando seleccione esta opción, el programa le generará un archivo de texto dentro de sus archivos del proyecto (por ejemplo, si trabaja en Replit, el archivo de texto aparecerá junto con el resto de los archivos .h y .cpp).
2. La función 9 sirve para importar archivos de texto donde se use la información dentro de este para añadir nuevos objetos al vector de inventario y, según cual sea el tipo del objeto, se añadirá también al vector correspondiente al de su tipo. Algo importante a tomar en cuenta es el formato de la información dentro del .txt, donde para que se importen correctamente los datos se debe seguir el siguiente formato (donde se sparan los datos por medio de un espacio):
  1. Si es Arma: Tipo(string) Nombre(string) Valor(float) Peso(float) Cantidad(int) Favorito(bool) Daño(int)
  2. Si es Atuendo: Tipo(string) Nombre(string) Valor(float) Peso(float) Cantidad(int) Favorito(bool) Proteccion(int)
  3. Si es cualquier otro tipo de objeto: Tipo(string) Nombre(string) Valor(float) Peso(float) Cantidad(int) Favorito(bool)

NOTA IMPORTANTE: Si por cualquier extraña razón no llegara a funcionar la función 8 (que funciona con que, si no existe un archivo de texto donde guardar los objetos del inventario entonces lo crea, y si ya existe entonces lo actualiza) en términos de actualizar la información, se recomiendo cerrar y vovler a abrir el archivo .txt, o simplemente borrar el archivo y  vovler a usar la opción 8 (donde esto sería en los casos más extremos). Pero, en general estos casos no deberían pasar, por lo que es recomendable primero revisar si se realizó correctamente la actualización.

## Descripción del Avance Final
En este último avance realizo correciones a la funciones de añadir y eliminar un objeto del inventario, de modo que ahora afecta también afecta al vector del Inventario General. Igualmente, defino el àrbol InventarioBST para aplicarlo en las funciones 8 y 9 al igual que se vea afectado por las funciones de añadir y eliminar objeto. De este modo, a la hora de seleccionar la opción 8 de generar un archivo de texto, se hace con respecto a este árbol, y cuando se selecciona la opción 9, la importanciòn del archivo de texto se da tanto en el vector de Inventario General y en los respectivos subinventarios a los que pertenece el objeto, y se hace también sobre el árbol.
Aparte, elimino la necesidad de tener que cargar un carácter cualquiera para iniciar el programa, de modo que comienza directamente cuando se corre el código para ejecutarlo en consola. E igualmente le añado un toque estético y una nueva opción, que sería la opción 10 para salir del inventario y terminar el programa, de modo que si el usuario ya no quiere realizar ninguna otra función dentro del inventario, ya tiene una opción disponible para salir de este.

## Intrucciones para compilar el programa
Lo primero es descargarlo e importarlo a un porgrama que pueda correr código de C++. Luego, importas todas las clases y corres el programa. Al principio, el porgrama te pedirá que ingreses cualqueir número para inicializar el programa, pero puedes ingresar cualqueir caractér y no te causará problemas. Luego de eso se imprimirá el menú, donde seleccionarás que acción queires que el programa realic conforme al número de la acción. Por ejemplo, si queires usar la opción "Agregar Objeto" escribe 1, para "Ordenar inventario" escribe 3, y así con las demás opciones. Cada opción puede tener opciones extra, donde luego de la pregunta que se te realice para darte contexto de que acciones puedes hacer, se te mostrará una lista de las palabras que debes usar como comandos. Por ejemplo, si seleccionaste "Mostrar Inventario" y te pregunta el porgrama "¿Qué inventario quieres mostrar? (Todos, Armas, Atuendo...)" y queires que se muestren sólo las armas, escribe "Armas" (tal y como viene escrito con la primera letra en mayúscula siempre) y dale clic en enter. Y haz lo mismo con las demás opciones si es que vienen varias acciones que puedes realizar. Cuando quieras deterner el programa, tan sólo escribe n minúscula, si quieres hacer otra acción luego de termianr una, escribe y en minúscula para dejarle claro al programa que quieres hacer algo más.

Aparte, si llegara a haber cualquier problema a la hora de correr el programa, puedes usar el siguiente link que te lleva a una pàgina de Replit donde tienes disponible todo el programa listo sòlo apra correrlo: https://replit.com/@JorgeOyoqui/Proyecto-Semestre-3

## Instrucciones para compilar el avance de proyecto
Ejecuta el siguiente comando en la terminal:

g++ main.cpp DataStructures.h Sort.cpp Sort.h Objeto.cpp Objeto.h Armas.cpp Armas.h Atuendo.cpp Atuendo.h Comida.cpp Comida.h Ingredientes.cpp Ingredientes.h Libros.cpp Libros.h Llaves.cpp Llaves.h Pociones.cpp Pociones.h Varios.cpp Varios.h -o Inventario

## Instrucciones para ejecutar el avance de proyecto
Ejecuta el siguiente comando en la terminal:

./Inventario

## Descripción de las entradas del proyecto
La entrada sólo requiere al principio cualqueir número, luego cuando se despliegue el menú sólo ocupas escribir un número para seleccionar la instrucción, luego, dependiendo de la acción seleccionada, debes ingresar la información que te pide el programa hasta que termine de realizar la acción, luego te preguntará si queires realizar otra acción, de nuevo, responde con respecto a las opciones disponibles. Sigue este proceso hasta que quieras dejar de usar el programa.

## Descripción de las salidas del avance de proyecto
Las únicas salidas del proyecto son cuando se seleccionan las opciones de "Mostrar Inventario", "Buscar objeto" o "Crear Archivo de Texto"; pues en el resto de las opciones no regresa nada y sólo se hacen modificaciones a los vectores o a los objetos dentro de estos. Así que, dependiendo de que opción elijas, se le devolverán al usuario diferentes cosas:
- Mostrar Inventario: Donde según que inventario decidas ver, se te mostrarán todos lo objetos de esa respectiva categoría, o si elijes mostrar TODOS los objetos, se te mostraran todos los objetos del inventario en general sin importar su tipo.
- Buscar Objeto: Donde se te mostrará la información del objeto que el usuario busca (si es que el objeto existe). Es importante aclarar que es muy importante escribir correctamente el nombre del objeto y usar "_" cuando haya un espacio.
- Crear Archivo de Texto: Donde el porgrama crea/actualiza un archivo de texto (de tipo .txt) al usaurio con toda la información de los obejtos en el inventario general.

## Desarrollo de Competencias
### SICT0301: Evalúa los componentes
#### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.
La versión de Sort que utilizo para esta parte es una variante del Intro sort porporcionado por la librería <algorithm>. El introsory es un híbrido entre otros tres tipos de sort: quicksort, heapsort e Insertion sort. El truco de este tipo de Sort es que, dependiendo de la seituación, utiliza la metodología de un sort o de otro. Al principio, empieza como un quicksort, pero pasado cidrto límite de tamaño, pasa a trabajar como un heapsort, esto para evitar el peor caso de un quicksort que resulta ser de una complejidad muy elevada (O(n^2)).Igualmente, si la cantidad de elementos resulta ser menor al esperado, cambia a funcionar como un usertion sort. Así que, en pocas palabras, se adapta al tamaño de los elementos a ordenar para funcionar como un tipo de sort en específico, de modo que en ningún caso supere el nivel de complejidad de O(n log  n).
 -Intro sort:
   - Mejor caso: O(n log n)
   - Caso promedio: O(n log n)
   - Peor Caso: O(n log n)

#### Hace un análisis de complejidad correcto y completo de todas las estructuras de datos y cada uno de sus usos en el programa.
 Contando que en sí la dificultad no viene tanto por el tipo de estructura de datos sino más bien porque función implementamos para ella, entonces el análisis de complejidad será en base a las funciones que usé para las estructuras de datos que implementé para mi proyecto.
  ##### Primera estructura de datos: Listas Doblemente Ligadas
  - getFirst(): Para conseguir la información del primer dato de la lista.
    - Mejor caso: O(1)
    - Caso promedio: O(1)
    - Peor Caso: O(1)
  Pues sólo se ontienen el primer dato de la lista, de modo que sin importar el caso, siempre tomará ese primer dato sin tener que recorrer más de la lista, y si a lista estuviera vacía, entocnes s´´olo mandaría un mensaje indicando ese hecho.

  - get(): Para obtener un la información de un dato en una posición de una lista.
    - Mejor caso: O(1)
    - Caso promedio: O(n)
    - Peor Caso: O(n)
  Pues en el mejor de los casos, el dato buscado es el primero en la lista. Ya en el peor de los casos tiene que reocrrer toda la lista para encontrar en dato deseado y en el promedio sería la mitad de la lista (O(n/2)), que igual se puede simplificar a O(n).

 ##### Segunda estructura de datos: Árbol de Búsqueda Binaria
  - add(): Para agregar un valor al árbol binario, de modo que al añadirse también se ordene con respecto a los demás datos.
    - Mejor caso: O(1)
    - Caso promedio: O(log n)
    - Pero caso: O(log n)
  Pues, al agregar el dato, se reduce a la mitad el espacio de búsqueda para ver en qué posición colocar el nuevo dato. Debido a ello, en todos menos en el mejor de los casos la dificultad es de O(log n). La razón por la que el mejor de los casos tiene una dificultad O(1), es porque apenas entre no es necesario seguir revisando donde ponerlo, peus ya está en la posición donde debería.

  - find(): Para encontrar un dato y consultar su información en un árbol binario.
    - Mejor caso: O(1)
    - Caso promedio: O(log n)
    - Pero caso: O(log n)
   Pues, al igual que en el add, en el mejor de los casos encontramos el dato que buscamos al inicio de la lista, y en los otros dos casos se reduce a la mitad el espacio de búsqueda para encontrar el dato deseado.

  - Inorder(): Método de ordenamiento para árboles donde primero visitamos su rama izquierda, luego su nodo y luego la rama derecha.
      - Mejor caso: O(n)
      - Caso promedio: O(n)
      - Pero caso: O(n)
  Pues, al ser un método de ordenamiento, debe cursar por cada nodo y rama del árbol para ordenarlos. Por ello, sin importar de que caso hablemos, la complejidad sigue siendo la misma, donde sólo varía el tamaño de árbol.

  - Preorder(): Método de ordenamiento para árboles donde primero visitamos el nodo, luego la rama izquierda y luego su rama derecha.
      - Mejor caso: O(n)
      - Caso promedio: O(n)
      - Pero caso: O(n)
  Pues, al ser un método de ordenamiento, debe cursar por cada nodo y rama del árbol para ordenarlos. Por ello, sin importar de que caso hablemos, la complejidad sigue siendo la misma, donde sólo varía el tamaño de árbol.

  - Postorder(): Método de ordenamiento para árboles donde primero visitamos la rama izquierda, luego la rama derecha y por último el nodo.
      - Mejor caso: O(n)
      - Caso promedio: O(n)
      - Pero caso: O(n)
  Pues, al ser un método de ordenamiento, debe cursar por cada nodo y rama del árbol para ordenarlos. Por ello, sin importar de que caso hablemos, la complejidad sigue siendo la misma, donde sólo varía el tamaño de árbol.

  - levelByLevel(): Método de ordenamiento para árboles donde ordenamos en base a los niveles del árbol, usando los nodos y a los sucesores del respctivo nodo superior a esa rama, pero ordenandolos según su nivel en el árbol binario.
      - Mejor caso: O(n)
      - Caso promedio: O(n)
      - Pero caso: O(n)
  Pues, al ser un método de ordenamiento, debe cursar por cada nodo y rama del árbol para ordenarlos. Por ello, sin importar de que caso hablemos, la complejidad sigue siendo la misma, donde sólo varía el tamaño de árbol.

#### Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa.
Para este apartado es necesario que especifique que este programa trabaja con diferentes aplicaiones, de modo que cada una hace una labor diferente y, por ende, tiende una complejidad distinta a las demás. Por lo que, para hacer este análisis de complejidad final del programa, es necesario dividir ql programa en los distintos componentes y funciones que lo conforman:
 ##### Agregar Objeto
   - Mejor caso: O(1)
   - Caso promedio: O(1)
   - Pero caso: O(1)
Pues al final sólo está agregando un objeto al final de un vector, por lo que no necesita hacer ningún recorrido o hacer varias operaciones múltiples veces, sino tan sólo hacer una única operación que sería esa de agregar el nuevo objeto al final de su respectivo vector y en el vector de "Inventario".
 
 ##### Eliminar Objeto
   - Mejor caso: O(1)
   - Caso promedio: O(n)
   - Pero caso: O(n)
Pues, en este caso, tiene que recorrer los elementos de los vectores para encontrar el objeto que se quiere eliminar. Por ello, sólo en el mejor caso la complejidad es O(1), porque entonces el objeto se encuentra al inicio del vector, y en el resto de los casos (el peor y el promedio) tiene que recorrer parte del vector o incluso el vector completo para encontrar el objeto a eliminar.

##### Mostrar Inventario
   - Mejor caso: O(n)
   - Caso promedio: O(n)
   - Pero caso: O(n)
Pues tiene que recorrer todo el vector de la categoría corrrespondiente a la que el usuario quiere ver, de modo que, sin importar el caso (mejor, peor o promedio), la complejidad es siempre la misma pues siempre se va a tener que recorrer todo el vector para imprimir la información de este.

##### Agregar Favorito
   - Mejor caso: O(1)
   - Caso promedio: O(n)
   - Pero caso: O(n)
En este caso, se tiene que recorrer todo el vector "Inventario" para encontrar el objeto al que se quiere hacer favorito. Por ello el mejor de los casos tiene una complejidad de O(1), porque entonces el objeto se encuentra al inicio del vector. Pero, si no es el caso, entonces se tiene que recorrer parte del vector o incluso el vector completo para encontrar el objeto que se quiere volver favorito.

##### Quitar Favorito
   - Mejor caso: O(1)
   - Caso promedio: O(n)
   - Pero caso: O(n)
En este caso, se tiene que recorrer todo el vector "Inventario" para encontrar el objeto al que se quiere quitar de favorito. Por ello el mejor de los casos tiene una complejidad de O(1), porque entonces el objeto se encuentra al inicio del vector. Pero, si no es el caso, entonces se tiene que recorrer parte del vector o incluso el vector completo para encontrar el objeto que se quiere quitar de favorito.

##### Ordenar Inventario
###### Función Intro Sort
   - Mejor caso: O(n log n)
   - Caso promedio: O(n log n)
   - Pero caso: O(n log n)
Como mencioné en el análisis de complejidad de mi algoritmo de ordenamiento, al ser una variante del Intro sort, este es un Sort híbrido que se adapta para nunca superar la complejidad de O(n log n). (Si quiere ver más información al respecto, visite el punto anterior de: "Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.". Ahí viene toda la información más detallada del sort usado para esta función.

###### Para la función de árbol de búsqueda binaria
Igualmente, hay una implementación de un árbol de búsqueda binaria, el cual, como ya vimos, no se puede analizar en sí como estructura de datos, sino más bien, se tiene que analizar la complejidad sus funciones, tema que abarco en el punto: "Segunda estructura de datos: Árbol de Búsqueda Binaria" (por eso no lo pongo otra vez, porque esta descripción ya viene más arriba en este documento).

##### Buscar Objeto
Al igual que en el punto anterior, esta función trabaja con una lista doblemente ligada, la cual, al igual que con los Árboles de búsqueda binaria, tiene que ser analizada en base a las funciones que la componen, tema que ya abarco en el punto: "Primera estructura de datos: listas doblemente ligadas".

##### Crear Archivo de Texto
   - Mejor caso: O(1)
   - Caso promedio: O(n)
   - Pero caso: O(n)
Pues, al ser una función que recorre todo el vector de Inventario, si este está vacío o tiene un único valor, su complejidad sería de O(1) porque sólo tendría que recorrer un elemento de la lista o devolver un mensaje que indique que el vector está vacío. Y es O(n) tanto para el peor caso como para el caso promedio porque recorre todos los demás elementos del vector para imprimirlos en un archivo de texto.

##### Importar Archivo de Texto
   - Mejor caso: O(n)
   - Caso promedio: O(n)
   - Pero caso: O(n)
Pues, sin importar cual sea el caso, siempre tiene que leer n cantidad de datos según cual sea el tipo de objeto, donde estos son usados como atributos para añadir el neuvo objeto al inventario. De modo que, al recorrer todos los datos de cada línea, su complejidad se vuelve constante siempre, donde lo único que podría pasar es que en el peor de los casos se de un error debido a que se habrá insertado la infromación en un formato u orden incorrecto.

##### Dificultad Final del Programa
Así que, para conseguir la dificultad final de mi programa, voy a definir que la dificultad de mi programa sea la de aquella función cuya dificultad es la más grande, donde esa función cuya dificultad es la mayor de todas es la del Intro Sort, teniendo una dificultad constante de O(n log n). Por ende, la dificultad final e mi programa es:
   - Mejor caso: O(n log n)
   - Caso promedio: O(n log n)
   - Peor Caso: O(n log n)

### SICT0302: Toma decisiones 
#### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.
Para el desarrollo de mi proyecto, decidí trabajar con la función sort que viene en la librería <algorithm> de C++. La razón de mi elección es porque, cpomo mencioné anteriormente, es un híbrido de tres sorts diferentes, por lo que escogí trabajar con un sort adaptativo a la cantidad de elementos, de modo que la complejidad temporal no cambia y se mantiene constante sin importar el caso. Justamente por eso decidí trabajar con este sort. Aparte de esto, este sort me permitió ordenar de diferentes formas una gran variedad de objetos según caracterísitcas como el nombre, el daño, defensa o valor de un objeto, de modo que me permite trabajar con características únicas de ciertos objetos y trabajar también con palabras, no sólo con números, lo que resultó ser también muy útil para la elaboración de mi proyecto.
#### Selecciona una estructura de datos adecuada al problema y la usa correctamente.
En mi proyecto, he decidido implementar un modelo de ordenamiento que utiliza árboles binarios para mejorar la organización y búsqueda de objetos en el inventario. Esta estructura de datos no solo permite almacenar los objetos de manera ordenada, sino que también facilita la realización de operaciones de búsqueda, inserción y eliminación de manera eficiente. El uso de árboles binarios complementa las funciones existentes al proporcionar una forma jerárquica de acceder a los datos, lo que es especialmente útil en un entorno donde se requiere un acceso rápido y constante a diferentes tipos de objetos.
Aparte, he incorporado una función que trabaja con una lista doblemente enlazada. Aunque en el programa actual esta implementación pueda parecer innecesaria o poco utilizada, su relevancia se hace evidente en un juego real donde la variedad de objetos puede ser considerablemente alta. La lista doblemente enlazada permite un acceso eficiente a los elementos en ambas direcciones y facilita la manipulación de los objetos dentro del inventario, lo que puede resultar en un ahorro significativo de tiempo para los jugadores que buscan algún objeto en específico.

### SICT0303: Implementa acciones científicas
#### Implementa mecanismos para consultar información de las estructras correctos.
Considero que este punto se cumple porque esto se impelementa sobre todo con la funciòn 7 de buscar un objeto en el inventario, pues, al encontrar el objeto, consulta la informaciòn de este como su nombre, valor, si es favorito o no y cualquier otro dato que incluya el objeto. Lo mismo con el ordenamiento con àrboles binario, pues consulta información en este caso de los objetos tipo Armas para poder ordenarlos. 
Aparte, con la función 8 de crear un archivo de texto, el usuario puede no sólo consultar la información, sino también descargarla en su ordenador para conservarla. Así que por eso creo que este punto se cumple correctamente, debido a estas dos funciones que le permiten al usuario conocer la información de los objetos que hay en su inventario.
#### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta.
Conaidero que este punto se cumple. Tengo opciones que reciben información como el de añadir nuevo objeto, pero el que definitivamente hace cumplir este punto es la opción 9 de Importar Archivo de Texto, pues esta está especialmente dedicada a recibir información de un archivo de texto para usar esa información e incluirla en el inventario general y, según cual sea su tipo, incluir el nuevo objeto también en su respectivo inventario según su tipo de objeto. De modo que estos nuevos objetos ahora se pueden usar para el resto de las funciones del programa como Mostrar Inventario, Eliminar Objeto u Ordenar Inventario. 
Si desea probra esta función, use el archivo "NuevosObjetos.txt" que viene incluido en este mismo repositorio, copia la ruta del archivo luego de descargarlo (si usas replit, vene una opción directa para copiar la ruta del archivo) y dásela al programa cuando te la pida luego de seleccionar usar la accion 9.
#### Implementa mecanismos de escritura de archivos para guardar los datos de las estructuras de manera correcta.
Este punto también se cumple, pues con la implementación de la función 8, el usuario puede crear o sobreescribir un archivo de texto que contenga la información del inventario, de modo que puede usar esa información de nuevo y conservarla a pesar de que el programa termine y toda la información dentro de este se pierda. 
Si desea comprobar la funcionalidad de esta opción, puede usar el archivo de "inventario.txt", que viene en este mismo repositorio, donde se demuestra como es que se almacena la información del programa, de modo que imrpime la información al igual que como lo hace en el programa principal.
Así que, en conclusión, debido a la función 8 (usando los argumentos que ya mencioné anteriormente), considero que este punto también se cumple.
