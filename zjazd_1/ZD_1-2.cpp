//
// Created by flomaddic on 10/12/24.
//


#include <iostream>
using namespace std;


int main3(int argc, char *argv[]) {
    int userinput;
    cout << "Type a number: ";
    cin >>  userinput;
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