//
// Created by flomaddic on 10/12/24.
//


#include "ZD_1-2.h"

#include <iostream>
using namespace std;

// Napisz program, który sprawdzi, czy liczba całkowita jest dodatnia, ujemna czy może jest 0.

void ZD_1_2::solution() {
    int userinput;
    cout << "Type a number: ";
    cin >> userinput;
    string message = "Your number is ";
    if (userinput > 0) {
        message += "greater than zero.\n";
    } else if (userinput < 0) {
        message += "less than zero.\n";
    } else {
        message += "equal to zero.\n";
    }
    cout << message << endl;
}
