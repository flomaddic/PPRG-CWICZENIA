//
// Created by flomaddic on 10/12/24.
//


#include <iostream>
using namespace std;

int main4(int argc, char *argv[]) {
    int userinput;
    cout << "Type a number: ";
    cin >>  userinput;
    string message = "Your number is ";
    if (userinput == 0) {
        message += "neither even nor odd.\n";
    } else if (userinput % 2 == 0) {
        message += "even.\n";
    } else if (userinput % 2 != 0) {
        message += "odd.\n";
    }
    cout << message << endl;
}