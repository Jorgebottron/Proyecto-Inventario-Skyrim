# Proyecto: Inventario de Skyrim
Un programa inspirado en el inventario del famoso juego The Elder Scrolls V: Skyrim, donde intento recrear el inventario utilizando técnicas como código orientado a objetos y aplicar varias funciones, como Sort por ejemplo. Donde el usuario podrá revisar el inventario según las diferentes categorías de objetos, guardar y eliminar objetos, agregar y quitar favoritos y ordenar el inventario según su conveniencia.

A program inspired by the inventory of the famous game The Elder Scrolls V: Skyrim, where I try to recreate the inventory using techniques such as object-oriented code and apply several functions, such as Sort for example. Where the user will be able to review the inventory according to the different categories of objects, save and delete objects, add and remove favorites and sort the inventory according to their convenience.
# The Programm
El programa mostrará un menú donde el usuario podrá interactuar para seleccionar qué acción desea realizar, teniendo seis opciones:
1. Agregar objeto
2. Eliminar objeto
3. Ordenar inventario
4. Agregar favorito
5. Eliminar favorito
6. Ordenar inventario

The program will display a menu where the user can interact to select what action they want to do, having six options:
1. Add Object
2. Remove Object
3. Sort Inventory
4. Add Favorite
5. Remove Favorite
6. Sort Inventory
## Descripción del Avance 1
En este primer avance incluyo todas las clases con las que voy a trabajar, junto con la clase Sort, que es la más importante en este avance, ya que fue solicitada específicamente. Aparte de eso, en el main hay un menú donde los usuarios pueden interactuar para decidir qué acción quieren que realice el programa.

In this first preview I include all the classes I'm going to work with, along with the Sort class, which is the most important in this preview, since it was specifically requested. Aside from that, in the main there is a menu where the users can interact to decide what action they want the program to do.
## Intrucciones para compilar el programa
Lo primero es descargarlo e importarlo a un porgrama que pueda correr código de C++. Luego, importas todas las clases y corres el programa. Al principio, el porgrama te pedirá que ingreses cualqueir número para inicializar el programa, pero puedes ingresar cualqueir caractér y no te causará problemas. Luego de eso se imprimirá el menú, donde seleccionarás que acción queires que el programa realic conforme al número de la acción. Por ejemplo, si queires usar la opción "Agregar Objeto" escribe 1, para "Ordenar inventario" escribe 3, y así con las demás opciones. Cada opción puede tener opciones extra, donde luego de la pregunta que se te realice para darte contexto de que acciones puedes hacer, se te mostrará una lista de las palabras que debes usar como comandos. Por ejemplo, si seleccionaste "Mostrar Inventario" y te pregunta el porgrama "¿Qué inventario quieres mostrar? (Todos, Armas, Atuendo...)" y queires que se muestren sólo las armas, escribe "Armas" (tal y como viene escrito con la primera letra en mayúscula siempre) y dale clic en enter. Y haz lo mismo con las demás opciones si es que vienen varias acciones que puedes realizar. Cuando quieras deterner el programa, tan sólo escribe n minúscula, si quieres hacer otra acción luego de termianr una, escribe y en minúscula para dejarle claro al programa que quieres hacer algo más.

The first thing you need to do is download it and import it into a program that can run C++ code. Then, you import all the classes and run the program. At first, the program will ask you to enter any number to initialize the program, but you can enter any character and it won't cause you any problems. After that, the menu will print, where you will select what action you want the actual program to perform according to the action number. For example, if you want to use the "Add Object" option, type 1, for "Order Inventory" type 3, and so on with the other options. Each option can have extra options, where after the question that is asked to give you context of what actions you can do, you will be shown a list of the words that you should use as commands. For example, if you selected "Show Inventory" and the program asks you "What inventory do you want to show? (All, Weapons, Outfit...)" and you want to show only weapons, type "Weapons" (as it is written with the first letter always capitalized) and hit enter. And do the same with the other options if there are multiple actions you can perform. When you want to determine the program, just type a lowercase n, if you want to do another action after finishing one, type a lowercase y to make it clear to the program that you want to do something else.

## Descripción de las entradas del proyecto
La entrada sólo requiere al principio cualqueir número, luego cuando se despliegue el menú sólo ocupas escribir un número para seleccionar la instrucción, luego, dependiendo de la acción seleccionada, debes ingresar la información que te pide el programa hasta que termine de realizar la acción, luego te preguntará si queires realizar otra acción, de nuevo, responde con respecto a las opciones disponibles. Sigue este proceso hasta que quieras dejar de usar el programa.

The input only requires any number at first, then when the menu is displayed you just need to type a number to select the instruction, then, depending on the selected action, you must enter the information that the program asks you until it finishes performing the action, then it will ask you if you want to perform another action, again, answer with respect to the available options. Continue this process until you want to stop using the program.

## Salidas del Proyecto
La única salida del proyecto es cuando seleccionas la opción "Mostrar Inventario", pues en el resto de las opciones no regresa nada y sólo se hacen modificaciones a los vectores o a los objetos dentro de estos. Así que dependiendo de que inventario quieras que se te muestre entonces esa será la única salida. Esto es así pues de hecho la opción de mostrar inventario sirve más que nada para que, luego de que el usuario alla ejecutado cualquier otra opción, pueda ver sus cambios directamente en el vector correspondiente a ese inventario.

The only way out of the project is when you select the "Show Inventory" option, since the rest of the options do not return anything and only make modifications to the vectors or the objects within them. So depending on which inventory you want to be shown, that will be the only way out. This is because in fact the option to show inventory serves more than anything so that, after the user has executed any other option, he can see his changes directly in the vector corresponding to that inventory.

## Desarrollode Competencias
De momento el proyecto busca cumplir con las siguientes competencias:
### SICT0301: Evalúa los componentes
- Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.
  Considero que esto es correcto, pues en el mismo porgrama incluyo el análisis de complejidad (no sólo del sort sino también de las demás acciones pero creo que eso estuvo de más) del sort, donde, debido a que este trabaja con una variante del Intro sort, luego de una investigación vi que su complejidad es siempre O(n log n), tanto para los mejores casos como para los peores y los promedios.
### SICT0302: Toma decisiones 
- Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.
  En este caso, como ya mencioné anteriormente, decidí trabajar con la función sort que viene en la librería <algorithm> de C++, y su uso es el correcto en cada caso que se usa, pues, dependiendo de cómo se busque ordenar la información, hay una versión diferente del mismo sort para cumplir con cada una de estas diferentes formas de ordenar el inventario
### SICT0303: Implementa acciones científicas
- Implementa mecanismos para consultar información de las estructras correctos
  En este caso, el mecanismo que isé para consultar la información fue a través de la opción de acción "Mostrar Inventario", que como ya mencioné anteriormente, sirve para que el usuario pueda ver los cambios que realizó con las diferentes acciones que el programa te ofrece, incluyendo la opción sort, pues el inventario naturalmente viene desordenado y, dependiendo de qué opción elijas para ordenar el inventario, el inventario se ordena y puedes consultar este cambio por medio de la opción que muestra el inventario. NOTA: si seleccionaste ordenar conforme al daño (característica única de las armas) o conforme a la protección (característica única de los atuendos), el orden sólo se aplicará en los vectores correspondintes a dichos objetos y no se aplicará a otros inventarios ni tampoco al inventario principal (que sería el que se llama "Todos"). 
