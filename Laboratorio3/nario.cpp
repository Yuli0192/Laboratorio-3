/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstddef>
#include "nario.h"

using namespace std;

Nario::Nario(int pval) {
    val = pval;
    hermano = NULL;
    hijo = NULL;
}

void Nario::setVal(int pval)
{
    val = pval;
}

int Nario::getVal(void)
{
    return val;
}

Nario * Nario::getHermano(void)
{
    return hermano;
}

void Nario::setHermano(Nario * phermano)
{
    hermano = phermano;
}

Nario * Nario::getHijo(void)
{
    return hijo;
}

void Nario::setHijo(Nario * phijo)
{
    hijo = phijo;
}