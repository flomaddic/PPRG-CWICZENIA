//
// Created by flomaddic on 10/26/24.
//

#ifndef ZD_2_H
#define ZD_2_H



class ZD_2 {



    int howManySlices(int guests) {
        int slicesPerPizza = 8;

        int pizzas = 1;

        while ((slicesPerPizza * pizzas) / guests < 1) {
            pizzas++;
        }

        return (pizzas * slicesPerPizza) / guests;
    }

    // int main() {
    //
    // }
};


#endif //ZD_2_H
