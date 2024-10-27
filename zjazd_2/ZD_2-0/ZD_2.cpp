//
// Created by flomaddic on 10/26/24.
//

#include "ZD_2.h"

#include <iostream>

// Zadanie 2.0 - ile kawalkow pizzy dostanie kazdy z n gosci zakladajac ze kazda pizza ma 8 kawalkow
// a reszta zostaje dla organizatora

    int howManySlices(int guests) {
        int slicesPerPizza = 8;
        int pizzas = 1;
        while ((slicesPerPizza * pizzas) / guests < 1) {
            pizzas++;
        }
        return (pizzas * slicesPerPizza) / guests;
    }

    // int main() {
    //     std::cout << howManySlices(2) << '\n';
    // }
