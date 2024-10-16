//
// Created by flomaddic on 10/12/24.
//


#include "ZD_1-3.h"

#include <iostream>
using namespace std;

//Zadanie: Napisz program, który sprawdzi, czy podana liczba całkowita jest parzysta, nieparzysta czy żadna (0)

void ZD_1_3::solution() {
    int userinput;
    cout << "Type a number: ";
    cin >> userinput;
    string message = "Your number is ";
    if (userinput == 0) {
        message += "neither even nor odd.";
    } else if (userinput % 2 == 0) {
        message += "even.";
    } else if (userinput % 2 != 0) {
        message += "odd.";
    }
    cout << message << endl;
}
