//
// Created by flomaddic on 11/11/24.
//

#include <iostream>
using namespace std;

void print_until_t() {
    char c;
    cout << "Please enter the first character: ";
    for (cin >> c; c != 't'; cin >> c) {
        cout << endl << "Entered character is: \'" << c << "\'" << endl;
        cout << "Enter next character: ";
    }
}

// int main() {
//     print_until_t();
// }
