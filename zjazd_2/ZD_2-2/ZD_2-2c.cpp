//
// Created by flomaddic on 10/26/24.
//

#include <iostream>
using namespace std;

void build_column() {
    int length;
    cout << "Podaj dlugosc kolumny : ";
    std::cin >> length;
    for (int i = 0; i < length; i++) {
        cout << "*" << endl;
    }
}

// int main() {
//     build_column();
// }
