/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 *
 * Created on February 1, 2016, 8:22 PM
 */

#include <iostream>

#include "arbolNario.h"
#include "nario.h"
using namespace std;

/*
 * 
 */

int main(void) {
    ArbolNario *arbol = new ArbolNario();
    
    Nario * nodo1 = new Nario(1);
    Nario * nodo2 = new Nario(2);
   
    arbol->insert(nodo1, nodo2);
    arbol->visitar(nodo1,2,3);
    arbol->visitar(nodo1,2,5);
    arbol->visitar(nodo1,3,4);
    arbol->visitar(nodo1,2,7);
    arbol->visitar(nodo1,5,8);
    
    cout<< "Mostrar Arbol N-ario"<< endl;
    arbol->mostrar(nodo1);
    cout<< endl;
    
    cout<< "Buscar elemento de un Arbol N-ario"<< endl;
    arbol->buscar(nodo1, 4);
    
}
