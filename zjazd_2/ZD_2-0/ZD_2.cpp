//
// Created by flomaddic on 10/26/24.
//

#include "ZD_2.h"

#include <iostream>


int howManySlices(int guests) {
        int slicesPerPizza = 8;

        int pizzas = 1;

        while ((slicesPerPizza * pizzas) / guests < 1) {
            pizzas++;
        }

        return (pizzas * slicesPerPizza) / guests;
    }

    int main() {
        std::cout << howManySlices(7) << '\n';
    }
