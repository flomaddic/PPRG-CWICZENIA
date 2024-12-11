//
// Created by flomaddic on 11/23/24.
//


#include <iostream>

void fill10x10Array() {

    //todo: is it that simple or misunderstood?

    int arr [10][10] = {{0}};

    for (int i = 0; i < 10; i++) {
        arr [i][0] = i;
        arr[i][1] = i + i;
        arr[i][2] = i * i;
        arr[i][3] = i + 3;
        arr[i][4] = i - 4;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// int main() {
//     fill10x10Array();
//     return 0;
// }
