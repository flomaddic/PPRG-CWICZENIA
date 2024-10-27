//
// Created by flomaddic on 10/26/24.
//

#include <iostream>
using namespace std;

void drawTriangle() {
    int a;

    cout << "Podaj dlugosc podstawy: ";
    cin >> a;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// int main() {
//     drawTriangle();
//     return 0;
// }