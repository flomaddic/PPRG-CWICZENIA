//
// Created by flomaddic on 10/26/24.
//


#include <iostream>
using namespace std;

void drawRect() {
    int height;
    int width;
    cout << "Podaj wysokosc: " << endl;
    cin >> height;
    cout << "Podaj szerokosc: " << endl;
    cin >> width;

    for (int i = 0; i < height; ++i) {
        for (int i = 0; i < width; ++i) {
            cout << "*";
        }
        cout << endl;
    }
}


// int main() {
//  drawRect();
// }