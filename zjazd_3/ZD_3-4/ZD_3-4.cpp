//
// Created by flomaddic on 11/22/24.
//

#include <iostream>
using namespace std;

void draw_pascal_triangle() {

    int height;
    cout << "Please enter the height of the triangle: ";
    cin >> height;

    cout << "Here's your triangle : " << endl;
    for (int row = 1; row <= height; row++) {
        int col = 1;
        for (int i = 1; i <= row; i++) {
            cout << col << " ";
            col = col * (row - i) / i;
        }
        cout << endl;
    }
}

// int main() {
//     draw_pascal_triangle();
//     return 0;
// }















