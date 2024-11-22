#ifndef DATASTRUCTURES_H
#define DATASTRUCTURES_H

#include <iostream>
#include <sstream>
#include <queue>
#include <list>
#include <string>
#include <vector>
#include "Objeto.h"
using namespace std;

// DLink Class
template <class T>
class DLink {
public:
    T value;
    DLink* previous;
    DLink* next;

    DLink(T val);
    DLink(T val, DLink* prev, DLink* nxt);
    DLink(const DLink<T>& source);
};

// DList Class
template <class T>
class DList {
private:
    DLink<T>* head;
    DLink<T>* tail;
    int size;

public:
    DList();
    ~DList();
    void addFirst(T);
    void add(T);
    T getFirst() const;
    T get(int index) const;
    int lenght();
    bool empty() const;
    void clear();
    T buscarPorNombre(const string&) const;
};

// DListIterator Class
template <class T>
class DListIterator {
private:
    DList<T>* theList;
    DLink<T>* previous;
    DLink<T>* current;

public:
    DListIterator(DList<T>* aList);
    DListIterator(const DListIterator<T>& source);

    bool begin();
    T& operator()();
    bool end();
    bool operator++();
    void operator=(T val);
};




// TreeNode Class
template <class T>
class TreeNode {
public:
    Objeto* value;
    TreeNode<T>* left;
    TreeNode<T>* right;

    TreeNode(Objeto* val);
    TreeNode(Objeto* val, TreeNode<T>* le, TreeNode<T>* ri);
    void add(Objeto* val);
    bool find(Objeto* val);
    void inorder(stringstream& aux) const;
    void preorder(stringstream& aux) const;
    void postorder(stringstream& aux) const;
    void levelByLevel(stringstream& aux) const;
};




// BST Class
template <class T>
class BST {
private:
    TreeNode<T>* root;

    void descendenteAux(TreeNode<T>* node, stringstream& aux) const;

public:
    BST();
    bool empty() const;
    void add(Objeto* val);
    bool find(Objeto* val) const;
    string inorder() const;
    string preorder() const;
    string postorder() const;
    string levelByLevel() const;
    string visit() const;
    string visitDescendant() const;
    int size() const;
    Objeto* getAtIndex(int) const;
    Objeto* getAtIndexAux(TreeNode<T>*, int, int&) const;
    void deleteNode(Objeto* val);
    TreeNode<T>* deleteNodeAux(TreeNode<T>* node, Objeto* val);
    TreeNode<T>* findMin(TreeNode<T>* node);

};

// Implementaciones de métodos

// DLink
template <class T>
DLink<T>::DLink(T val) : value(val), previous(0), next(0) {}

template <class T>
DLink<T>::DLink(T val, DLink* prev, DLink* nxt) : value(val), previous(prev), next(nxt) {}

template <class T>
DLink<T>::DLink(const DLink<T>& source) : value(source.value), previous(source.previous), next(source.next) {}

// DList
template <class T>
DList<T>::DList() : head(NULL), tail(NULL), size(0) {}

template <class T>
DList<T>::~DList() {
    clear();
}
template <class T>
void DList<T>::addFirst(T val)  {
    //Crear el nuevo nodo
    DLink<T> * nuevo_nodo = new DLink<T>(val);
    if(nuevo_nodo == NULL) {
        throw string("OutOfMemory");
    }
    //La lista está vacía
    if (empty()) {
        head = nuevo_nodo;
        tail = nuevo_nodo;
    } else {
        //La lista no está vacía
        head->previous = nuevo_nodo;
        nuevo_nodo->next = head;
        head = nuevo_nodo;
    }
    size++;
}

template <class T>
void DList<T>::add(T val)  {
    //Crear el nuevo nodo
    DLink<T> * nuevo_nodo = new DLink<T>(val);
    if(nuevo_nodo == NULL) {
        throw string("OutOfMemory");
    }
    if(empty()) {
        head = nuevo_nodo;
        tail = nuevo_nodo;
    } else {
        nuevo_nodo->previous = tail;
        tail->next = nuevo_nodo;
        tail = nuevo_nodo;
    }
    size++;
}


template <class T>
T DList<T>::getFirst() const {
    if (empty()) {
        throw string("NoSuchElement");
    }
    return head->value;
}

//Con la siguiente complejidad:
//Mejor Caso: O(1)
//Peor Caso: O(n)
//Caso Promedio: O(n)
template <class T>
T DList<T>::get(int index) const {
    if (index < 0 || index >= size) {
        throw string("IndexOutOfBounds");
    }
    if (index == 0) {
        return getFirst();
    }
    DLink<T>* p = head;
    for (int pos = 0; pos < index; ++pos) {
        p = p->next;
    }
    return p->value;
}

template <class T>
int DList<T>::lenght() {
    return size;
}

template <class T>
bool DList<T>::empty() const {
    return (size == 0 && head == NULL && tail == NULL);
}

template <class T>
void DList<T>::clear() {
    DLink<T>* p = head;
    while (p != NULL) {
        DLink<T>* q = p->next;
        delete p;
        p = q;
    }
    head = NULL;
    tail = NULL;
    size = 0;
}

template <class T>
T DList<T>::buscarPorNombre(const std::string& nombre) const {
    DLink<T>* actual = head;
    while (actual != nullptr) {
        if (actual->value->getNombre() == nombre) {
            return actual->value; // Retornamos el objeto si coincide el nombre
        }
        actual = actual->next;
    }
    return nullptr; // Retorna nullptr si no se encontró
}


// DListIterator
template <class T>
DListIterator<T>::DListIterator(DList<T>* aList) : theList(aList) {
    begin();
}

template <class T>
DListIterator<T>::DListIterator(const DListIterator<T>& source) : theList(source.theList) {
    begin();
}

template <class T>
bool DListIterator<T>::begin() {
    previous = NULL;
    current = theList->head;
    return (current != NULL);
}

template <class T>
T& DListIterator<T>::operator()() {
    if (current == NULL) {
        throw string("NoSuchElement");
    }
    return current->value;
}

template <class T>
bool DListIterator<T>::end() {
    return current == NULL;
}

template <class T>
bool DListIterator<T>::operator++() {
    if (current == NULL) {
        if (previous == NULL) {
            current = theList->head;
        } else {
            current = previous->next;
        }
    } else {
        previous = current;
        current = current->next;
    }
    return (current != NULL);
}

template <class T>
void DListIterator<T>::operator=(T val) {
    if (current == NULL) {
        throw string("NoSuchElement");
    }
    current->value = val;
}




// TreeNode
template <class T>
TreeNode<T>::TreeNode(Objeto* val) : value(val), left(NULL), right(NULL) {}

template <class T>
TreeNode<T>::TreeNode(Objeto* val, TreeNode<T>* le, TreeNode<T>* ri) : value(val), left(le), right(ri) {}

template <class T>
void TreeNode<T>::add(Objeto* val) {
    if (val < value) {
        if (left == NULL) {
            left = new TreeNode<T>(val);
        } else {
            left->add(val);
        }
    } else {
        if (right == NULL) {
            right = new TreeNode<T>(val);
        } else {
            right->add(val);
        }
    }
}

template <class T>
bool TreeNode<T>::find(Objeto* val) {
    if (val == value) {
        return true;
    }
    if (val < value) {
        return (left != NULL) ? left->find(val) : false;
    } else {
        return (right != NULL) ? right->find(val) : false;
    }
}

template <class T>
void TreeNode<T>::inorder(stringstream& aux) const {
    if (left != NULL) {
        left->inorder(aux);
        aux << " ";
    }
    aux << value->getNombre();
    if (right != NULL) {
        aux << " ";
        right->inorder(aux);
    }
}

template <class T>
void TreeNode<T>::preorder(stringstream& aux) const {
    aux << value->getNombre();
    if (left != NULL) {
        aux << " ";
        left->preorder(aux);
    }
    if (right != NULL) {
        aux << " ";
        right->preorder(aux);
    }
}

template <class T>
void TreeNode<T>::postorder(stringstream &aux) const {
    if (left != NULL) {
        left->postorder(aux);
        aux << " ";
    }
    if (right != NULL) {
        right->postorder(aux);
        aux << " ";
    }
    aux << value->getNombre();
}

template <class T>
void TreeNode<T>::levelByLevel(stringstream& aux) const {
    queue<const TreeNode<T>*> q;
    q.push(this);
    bool first = true;
    while (!q.empty()) {
        const TreeNode<T>* current = q.front();
        q.pop();
        if (!first) {
            aux << " ";
        }
        aux << current->value->getNombre();
        first = false;
        if (current->left != NULL) {
            q.push(current->left);
        }
        if (current->right != NULL) {
            q.push(current->right);
        }
    }
}

// BST
template <class T>
BST<T>::BST() : root(NULL) {}

template <class T>
bool BST<T>::empty() const {
    return root == NULL;
}

template <class T>
void BST<T>::add(Objeto* val) {
    if (empty()) {
        root = new TreeNode<T>(val);
    } else {
        root->add(val);
    }
}

template <class T>
bool BST<T>::find(Objeto* val) const {
    return !empty() && root->find(val);
}

template <class T>
std::string BST<T>::inorder() const {
    stringstream aux;
    aux << "[";
    if (!empty()) {
        root->inorder(aux);
    }
    aux << "]";
    return aux.str();
}

template <class T>
std::string BST<T>::preorder() const {
    stringstream aux;
    aux << "[";
    if (!empty()) {
        root->preorder(aux);
    }
    aux << "]";
    return aux.str();
}

template <class T>
std::string BST<T>::postorder() const {
    stringstream aux;
    aux << "[";
    if (!empty()) {
        root->postorder(aux);
    }
    aux << "]";
    return aux.str();
}

template <class T>
std::string BST<T>::levelByLevel() const {
    stringstream aux;
    aux << "[";
    if (!empty()) {
        root->levelByLevel(aux);
    }
    aux << "]";
    return aux.str();
}

//Con la siguiente complejidad:
//Mejor Caso: O(n)
//Peor Caso: O(n)
//Caso Promedio: O(n)
template <class T>
string BST<T>::visit() const {
    stringstream aux;
    aux << "Ordenamiento Preorder: " << preorder() << "\n"
        << "Ordenamiento Inorder: " << inorder() << "\n"
        << "Ordenamiento Postorder: " <<postorder() << "\n"
        << "Ordenamiento Level By Level: " << levelByLevel() << "\n";
    return aux.str();
}

//A diferencia del visit normal, este visita primero el subárbol derecho, 
//luego el nodo actual y por último el subárbol izquierdo. Esto para generar
//que se envíen los datos de forma descendente.Es el contrario al orden Inorder
//Con la siguiente complejidad:
//Mejor Caso: O(n)
//Peor Caso: O(n)
//Caso Promedio: O(n)
template <class T>
void BST<T>::descendenteAux(TreeNode<T>* node, stringstream& aux) const {
    if (node == nullptr) {
        return;
    }
    descendenteAux(node->right, aux);
    aux << node->value->getNombre() << " ";
    descendenteAux(node->left, aux);
}
//Su complejidad es la misma que la de descdendantAux
template <class T>
std::string BST<T>::visitDescendant() const {
    stringstream aux;
    aux << "Orden Descendente: [";
    if (!empty()) {
        descendenteAux(root, aux);
    }
    aux << "] \n";
    return aux.str();
}

template <class T>
int BST<T>::size() const {
    return sizeAux(root);
}

template <class T>
int sizeAux(const TreeNode<T>* node) {
    if (node == nullptr) {
        return 0;
    }
    return 1 + sizeAux(node->left) + sizeAux(node->right);
}

template <class T>
Objeto* BST<T>::getAtIndex(int index) const {
    int currentIndex = 0; // Índice acumulativo inicializado.
    return getAtIndexAux(root, index, currentIndex);
}

template <class T>
Objeto* BST<T>::getAtIndexAux(TreeNode<T>* node, int targetIndex, int& currentIndex) const {
    if (node == nullptr) {
        return nullptr; // Si llegamos a un nodo vacío, no hay resultado.
    }

    // 1. Buscar en el subárbol izquierdo.
    Objeto* leftResult = getAtIndexAux(node->left, targetIndex, currentIndex);
    if (leftResult != nullptr) {
        return leftResult; // Si el resultado está en la izquierda, devolverlo.
    }

    // 2. Procesar el nodo actual.
    if (currentIndex == targetIndex) {
        return node->value; // Si el índice actual coincide, devolver el valor.
    }
    currentIndex++; // Incrementar el índice después de procesar el nodo.

    // 3. Buscar en el subárbol derecho.
    return getAtIndexAux(node->right, targetIndex, currentIndex);
}

template <class T>
void BST<T>::deleteNode(Objeto* val) {
    if (empty()) {
        throw std::runtime_error("El árbol está vacío, no se puede eliminar.");
    }
    root = deleteNodeAux(root, val);
}

template <class T>
TreeNode<T>* BST<T>::deleteNodeAux(TreeNode<T>* node, Objeto* val) {
    if (node == nullptr) {
        return nullptr; // Nodo no encontrado.
    }

    if (val < node->value) {
        node->left = deleteNodeAux(node->left, val); // Buscar en el subárbol izquierdo.
    } else if (val > node->value) {
        node->right = deleteNodeAux(node->right, val); // Buscar en el subárbol derecho.
    } else {
        // Nodo encontrado, manejar los casos:
        if (node->left == nullptr && node->right == nullptr) {
            delete node; // Caso 1: Nodo sin hijos.
            return nullptr;
        } else if (node->left == nullptr) {
            TreeNode<T>* temp = node->right;
            delete node; // Caso 2: Nodo con un hijo (derecho).
            return temp;
        } else if (node->right == nullptr) {
            TreeNode<T>* temp = node->left;
            delete node; // Caso 2: Nodo con un hijo (izquierdo).
            return temp;
        } else {
            // Caso 3: Nodo con dos hijos.
            TreeNode<T>* temp = findMin(node->right); // Encontrar sucesor inorden.
            node->value = temp->value; // Reemplazar valor.
            node->right = deleteNodeAux(node->right, temp->value); // Eliminar sucesor.
        }
    }
    return node;
}

template <class T>
TreeNode<T>* BST<T>::findMin(TreeNode<T>* node) {
    while (node->left != nullptr) {
        node = node->left; // Moverse al extremo izquierdo.
    }
    return node;
}


// Instanciaciones de plantillas
template class TreeNode<int>;
template class BST<int>;

#endif 
