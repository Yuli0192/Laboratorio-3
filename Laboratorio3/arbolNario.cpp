/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstddef>
#include "arbolNario.h"

ArbolNario::ArbolNario(void) {
    length = 0;
    head = NULL;
    aux = NULL;
}

int ArbolNario::getLength(void) const {
    return length;
}

Nario *ArbolNario::getHead()const {
    return this->head;
}

bool ArbolNario::visitar(Nario* head, int padre, int elem) {
    Nario *nuevoNodo;
    nuevoNodo = new Nario(elem);
    bool r = false;
    if (!head) {
        head = nuevoNodo;
        return true;
    }

    if (head->getVal() == padre) {
        return this->insert(head, nuevoNodo);
    }

    if (head->getHijo()) {
        r = this->visitar(head->getHijo(), padre, elem);
        if (r) {
            return r;
        }
    }

    if (head->getHermano()) {
        r = this->visitar(head->getHermano(), padre, elem);
        if (r) {
            return r;
        }
    }

    return false;

}

bool ArbolNario::insert(Nario* head, Nario* nuevoElem) {
    Nario* aux;
    if (!head->getHijo()) {
        head->setHijo(nuevoElem);
    } else {
        aux = head->getHijo();
        while (aux) {
            if (!aux->getHermano()) {
                if(!(aux->getVal() == nuevoElem->getVal())){
                    aux->setHermano(nuevoElem);  
                } 
                return true;
            }
            aux = aux->getHermano();
        }
    }
}

bool ArbolNario::buscar(Nario* head, int elem) {
    bool r = false;
    if (!head) {
        return false;
    }

    if (head->getVal() == elem) {
        cout<< "El valor que estaba buscando es: " << head->getVal()<< endl;;
        return true;
    }

    if (head->getHijo()) {
        r = buscar(head->getHijo(), elem);
        if (r) {
            return r;
        }
    }

    if (head->getHermano()) {
        r = buscar(head->getHermano(), elem);
        if (r) {
            return r;
        }
    }

    return false;
}

bool ArbolNario::mostrar(Nario* head) {
    bool r = false;
    if (!head) {
        return r;
    }
 
    cout<< head->getVal();

    if (head->getHijo()) {
        r = mostrar(head->getHijo());
        if (r) {
            return r;
        }
    }

    if (head->getHermano()) {
        r = mostrar(head->getHermano());
        if (r) {
            return r;
        }
    }

    return r;
}


