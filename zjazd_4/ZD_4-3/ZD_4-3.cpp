//
// Created by flomaddic on 11/23/24.
//

#include <cstdlib>
#include <stdlib.h>

void fill10x10Array() {
    int arr [10][10] = {{0}};

    for (int i = 0; i < 10; i++) {
        arr [i][0] = i;
        arr[i][1] = i + i;
        arr[i][2] = i * i;
        arr[i][3] = i + 3;
        arr[i][4] = i - 4;
    }
}

int main() {
    fill10x10Array();
    return 0;
}
