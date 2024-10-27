//
// Created by flomaddic on 10/26/24.
//

#include <iostream>
#include <ostream>
using namespace std;

void drawTriangleRotated() {
    int length;
    cout << "Podaj dlugosc gornego boku: " << endl;
    cin >> length;

    for (int i = length; i > 0; i--) {
        for (int j = length; j > i; j--) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// int main() {
//     drawTriangleRotated();
//     return 0;
// }