//
// Created by flomaddic on 10/26/24.
//

#include <array>
#include <iostream>
using namespace std;

void build_row() {
    int length;
    cout << "podaj dlugosc: " << endl;
    cin >> length;
    for (int i = 0; i < length; i++) {
        cout << "*";
    }
    cout << endl;
}

// int main() {
//     build_row();
// }