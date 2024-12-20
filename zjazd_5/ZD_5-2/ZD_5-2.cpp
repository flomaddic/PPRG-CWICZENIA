//
// Created by flomaddic on 12/11/24.
//


#include <iostream>
#include <vector>
using namespace std;

vector<int> build_vector() {
    int size;
    cout << "Please enter vector size: ";
    cin >> size;
    if (size < 1) {
        cerr << "Invalid vector size!" << endl;
        throw invalid_argument("Invalid vector size");
    }
    vector<int> v = vector<int>(size);
    v.reserve(size);
    for (int i = 0; i < size; i++) {
        cout << "Please enter vector element #" << i + 1 << ": ";
        cin >> v[i];
    }
    return v;
}

void swap_values(vector<int>& v, int pos1, int pos2) {
    int temp = v[pos1];
    v[pos1] = v[pos2];
    v[pos2] = temp;
}

vector<int> transpose_vector(vector<int>& v) {
    for (int i = 0; i < v.size() / 2; ++i) {
        swap_values(v, i, v.size() / 2 + v.size() % 2 + i);
    }
    return v;
}

void print_vector(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = build_vector();
    cout << "Your input vector is:" << endl;
    print_vector(v);
    vector<int> v2 = transpose_vector(v);
    cout << "The transposed vector is:" << endl;
    print_vector(v2);
    return 0;
}
