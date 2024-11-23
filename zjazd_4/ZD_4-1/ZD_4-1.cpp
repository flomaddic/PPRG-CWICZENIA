//
// Created by flomaddic on 11/23/24.
//

#include <iostream>
using namespace std;

void maxArr() {
    int size;
    cout << "Enter array size: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << endl << "Enter array element at index " << i << ": ";
        cin >> arr[i];
    }
    cout << endl;
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "The highest array element is " << max << endl;
}

// int main() {
//     maxArr();
//     return 0;
// }