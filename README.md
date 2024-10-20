# Proyecto: Inventario de Skyrim
Un programa inspirado en el inventario del famoso juego The Elder Scrolls V: Skyrim, donde intento recrear el inventario utilizando técnicas como código orientado a objetos y aplicar varios tipos de funciones que incluyen funciones de tipo Sort o de Estructuras de Datos por ejemplo. Donde el usuario podrá revisar el inventario según las diferentes categorías de objetos, guardar y eliminar objetos, agregar y quitar favoritos y ordenar el inventario según su conveniencia.

# El programa
El programa mostrará un menú donde el usuario podrá interactuar para seleccionar qué acción desea realizar, teniendo siete opciones:
1. Agregar objeto
2. Eliminar objeto
3. Ordenar inventario
4. Agregar favorito
5. Eliminar favorito
6. Ordenar inventario
7. Buscar objeto

## Descripción del Avance 1
En este primer avance incluyo todas las clases con las que voy a trabajar, junto con la clase Sort, que es la más importante en este avance, ya que fue solicitada específicamente. Aparte de eso, en el main hay un menú donde los usuarios pueden interactuar para decidir qué acción quieren que realice el programa.

## Descripción del Avance 2
En este segundo avance, incluyo la aplicaciòn de estructuras de datos a mi programa. Para esto, creo un nuevo archivo llamado "DataStructures.h", donde incluyo las siguientes funciones:
1. Lista Doblemente Enlazada: Que se usa para la nueva funciòn de bùsqueda, que en el menù serìa la funciòn 7. Busca en la lista del inventario el nombre del objeto que estàs buscando, y, si lo encuentra, devuelve la infromaciòn del objeto junto con su ubicaciòn en el inventario (que serìa su ubicaciòn en la lista de Inventario".
2. Àrboles de Bùsqueda Binaria: Donde, a pesar de que su nobmre es Àrbol de BÙSQUEDA, realmente lo uso para añadir una nueva funciòn a la funciòn 6 de ordenar los datos, donde viene la nueva opciòn de ordenarlos en ordenes de tipo Postorder, Inorder, Preorder y Level By Level (aplicable sòlo apra la forma ascendente, pues en la descendente sòlo agreguè un sòlo ordenamiento).
Aparte de añadir todo esto esto, no mofico mucho el main màs que sòlo para agregar estas nuevas funciones, y el resto de los archivos se mantienen igual.

## Intrucciones para compilar el programa
Lo primero es descargarlo e importarlo a un porgrama que pueda correr código de C++. Luego, importas todas las clases y corres el programa. Al principio, el porgrama te pedirá que ingreses cualqueir número para inicializar el programa, pero puedes ingresar cualqueir caractér y no te causará problemas. Luego de eso se imprimirá el menú, donde seleccionarás que acción queires que el programa realic conforme al número de la acción. Por ejemplo, si queires usar la opción "Agregar Objeto" escribe 1, para "Ordenar inventario" escribe 3, y así con las demás opciones. Cada opción puede tener opciones extra, donde luego de la pregunta que se te realice para darte contexto de que acciones puedes hacer, se te mostrará una lista de las palabras que debes usar como comandos. Por ejemplo, si seleccionaste "Mostrar Inventario" y te pregunta el porgrama "¿Qué inventario quieres mostrar? (Todos, Armas, Atuendo...)" y queires que se muestren sólo las armas, escribe "Armas" (tal y como viene escrito con la primera letra en mayúscula siempre) y dale clic en enter. Y haz lo mismo con las demás opciones si es que vienen varias acciones que puedes realizar. Cuando quieras deterner el programa, tan sólo escribe n minúscula, si quieres hacer otra acción luego de termianr una, escribe y en minúscula para dejarle claro al programa que quieres hacer algo más.

Aparte, si llegara a haber cualquier problema a la hora de correr el programa, puedes usar el siguiente link que te lleva a una pàgina de Replit donde tienes disponible todo el programa listo sòlo apra correrlo: https://replit.com/@JorgeOyoqui/Proyecto-Semestre-3

## Descripción de las entradas del proyecto
La entrada sólo requiere al principio cualqueir número, luego cuando se despliegue el menú sólo ocupas escribir un número para seleccionar la instrucción, luego, dependiendo de la acción seleccionada, debes ingresar la información que te pide el programa hasta que termine de realizar la acción, luego te preguntará si queires realizar otra acción, de nuevo, responde con respecto a las opciones disponibles. Sigue este proceso hasta que quieras dejar de usar el programa.

## Salidas del Proyecto
La única salida del proyecto es cuando seleccionas la opción "Mostrar Inventario" o "Buscar objeto", pues en el resto de las opciones no regresa nada y sólo se hacen modificaciones a los vectores o a los objetos dentro de estos. Así que, dependiendo de que inventario quieras que se te muestre, entonces esa será la única salida. Esto es así pues de hecho la opción de mostrar inventario sirve más que nada para que, luego de que el usuario alla ejecutado cualquier otra opción, pueda ver sus cambios directamente en el vector correspondiente a ese inventario; y la opciòn de buscar objeto tambièn sirve para cuando el usuario quiera comrpobar si funciones como añadir o quitar objetos realmente funcionaron.

## Desarrollode Competencias
De momento el proyecto busca cumplir con las siguientes competencias:
### SICT0301: Evalúa los componentes
#### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.
  Tipo de sort: variante del Intro sort
  - Mejor caso: O(n log n)
  - Caso promedio: O(n log n)
  - Peor Caso: O(n log n)
  Tambièn puedes encontrar el anàlisis en el Main.cpp en la lìnea de còdigo 481.

#### Hace un análisis de complejidad correcto y completo de todas las estructuras de datos y cada uno de sus usos en el programa.
  Tipo de lista: Lista Doblemente Enlazada
  - Mejor caso: O(1)
  - Caso promedio: O(n)
  - Pero caso: O(n)
  Tambièn puedes encontrar el anàlisis en el archivo "DataStructure.h" en la lìnea de còdigo 129.
 
  Tipo de àrbol: Àrbol de Bùsqueda Binaria
  Tanto la funciòn de ordenamiento ascendente como la de ordenamiento descendente usando àrboles de bùsqueda binarios tienen la misma dificultad, que es la siguiente: 
  - Mejor caso: O(n)
  - Caso promedio: O(n)
  - Peor caso: O(n)
  Tambièn puedes encontrar el anàlisis en el Main.cpp en la lìnea de còdigo 548 y en el archivo "DataStructure.h" desde las lìneas de còdigo 384-414.

### SICT0302: Toma decisiones 
#### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.
En este caso, como ya mencioné anteriormente, decidí trabajar con la función sort que viene en la librería <algorithm> de C++, y su uso es el correcto en cada caso que se usa, pues, dependiendo de cómo se busque ordenar la información, hay una versión diferente del mismo sort para cumplir con cada una de estas diferentes formas de ordenar el inventario
#### Selecciona una estructura de datos adecuada al problema y la usa correctamente.
Igualmente como ya mencionè, implemento un nuevo modelo de ordenamiento usando àrboles binarios lo que ayuda a complementar las funciones de las opciòn 6, dàndole màs variedad a esta opciòn.
Y agrego una nuevo funciòn que funciona con una lista doblemente enlazada que, aunque en el programa actual parezca inùtil o innecesaria, en el juego real serìa mucho màs escencial contando la enorme variedad de objetos que hay, lo que ayudarìa al usuario a ahorrarse tiempo en buscar objetos.
Por eso considero que este punto se cumple pues funciona bien para el programa, complementa funciones ya existentes y agrega nuevas que resultan muy ùtiles para su aplicaciòn en el juego real.

### SICT0303: Implementa acciones científicas
#### Implementa mecanismos para consultar información de las estructras correctos.
Considero que este punto se cumple porque esto se impelementa sobre todo con la funciòn 7 de buscar un objeto en el inventario, pues, al encontrar el objeto, consulta la informaciòn de este como su nombre, valor, si es favorito o no y cualquier otro dato que incluya el objeto. Lo mismo con el ordenamiento con àrboles binario, pues consulta informaciòn en este caso de los objetos tipo Armas para poder ordenarlos. 
#### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta.
Esto tambièn considero que se cumple, pues, sobre todo con el ordenamiento de àrboles binarios, se agregan los datos de las armas en una nueva lista que agrega esta informaciòn para que se pueda hacer el ordenamiento segùn los diferentes tipos de ordenamiento.
Algo parecido pasa con la funciòn de bùsqueda, pues en esta se carga el nombre del objeto que desea buscar, por lo que esta funciòn debe de poder recibir y leer el nombre y poder compararlo con los atributos Normbre de los demàs objetos para ver si encuentra el objeto para devolver la infroamciòn y posiciòn en el inventario de este, o, en caso de no encontrarlo, informarle al usuario que no encuentra ese objeto.
Por lo que en ambas funciones deben de poder recibir, cargar y leer informaciòn apra que puedan realizar sus respectivas funciones, por eso considero que este punto tambièn se cumple.
