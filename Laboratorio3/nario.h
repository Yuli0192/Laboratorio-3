/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   node.h
 *
 * Created on May 15, 2016, 8:54 PM
 */

#ifndef NODE_H
#define NODE_H

using namespace std;

class Nario {
private:
    int val;
    Nario *hermano;
    Nario *hijo;
    
public:
    Nario(int val = 0);
    int getVal(void);
    void setVal(int val);
    Nario * getHermano(void);
    Nario * getHijo(void);
    void setHermano(Nario *);
    void setHijo(Nario *); 
   // void imprimirNodo(void); //Analizadora

};


#endif /* NODE_H */

