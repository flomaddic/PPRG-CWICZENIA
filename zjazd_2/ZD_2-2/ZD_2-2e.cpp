//
// Created by flomaddic on 10/26/24.
//

#include <iostream>
using namespace std;

void drawEmptyRect() {
    int height;
    int width;
    cout << "Podaj wysokosc: " << endl;
    cin >> height;
    cout << "Podaj szerokosc: " << endl;
    cin >> width;

    for (int i = 0; i < height; i++) {
        if (i == 0 || i == height - 1) {
            for (int j = 0; j < width; j++) {
                cout << "*";
            }
        } else {
            for (int j = 0; j < width; j++) {
                if (i == 0 || i == width - 1) {
                    cout << "*";
                } else {
                    cout << ((j == 0 || j == width - 1) ? "*" : " ");
                }
            }
        }

        cout << endl;
    }
}

// int main() {
//     drawEmptyRect();
//     return 0;
// }