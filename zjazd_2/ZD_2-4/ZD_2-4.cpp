//
// Created by flomaddic on 10/27/24.
//


#include <cstdio>
#include <iostream>
using namespace std;

int get_diamond_height() {
    int num;
    cout << "Podaj wysokość diamentu: " << endl;
    cin >> num;
    return num;
}


void draw_diamond(int height) {
    for (int i = 0; i <= height/2; i++) {
        for (int j = 0; j < height; j++) {
            if (j > height/2 - i && j < height/2 + i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = height/2 + height % 2; i > 0; i--) {
        for (int j = 0; j < height; j++) {
            if (j < height/2 + i && j > height/2 - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

}

// int main() {
//     int diamond_height = get_diamond_height();
//     draw_diamond(diamond_height);
//     return 0;
// }