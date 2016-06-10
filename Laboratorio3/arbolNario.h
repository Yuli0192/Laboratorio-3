/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OrderedList.h
 *
 * Created on May 5, 2016, 8:58 PM
 */

#ifndef ORDEREDLIST_H
#define ORDEREDLIST_H
#include <iostream>
#include "nario.h"
using namespace std;

class ArbolNario {
private:
    int length;
    Nario *head;
    Nario *aux;
public:
    ArbolNario(void);
    int getLength(void) const;
    Nario *getHead(void) const;
    void setLength(int l);
    void setHead(Nario *);
    void showList(void);
    bool visitar(Nario*, int, int);
    bool buscar(Nario*, int);
    bool mostrar(Nario*);
    bool insert(Nario*, Nario*);
    bool remove(int);
};


#endif /* ORDEREDLIST_H */

