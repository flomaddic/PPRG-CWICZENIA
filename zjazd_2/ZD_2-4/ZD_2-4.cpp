//
// Created by flomaddic on 10/27/24.
//


#include <cstdio>
using namespace std;



void drawDiamond(int h) {
    int height;
    if (h % 2 == 0) {
        height = h + 2;
    } else {
        height = h;
    }
    //cala wysokosc
    for (int i = 0; i < height/2 + height % 2; i++) {
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

int main() {
    //todo: diamond's there, fix the height for odd numbers
    drawDiamond(9);
    return 0;
}