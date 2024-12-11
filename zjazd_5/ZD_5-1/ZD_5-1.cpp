//
// Created by flomaddic on 12/7/24.
//

#include <iostream>
#include <vector>;
#include <algorithm>;
#include <chrono>
#include <limits.h>
using namespace std;
//
// auto get_current_time_millis() {
//     return chrono::duration_cast<chrono::milliseconds>(
//               chrono::system_clock::now().time_since_epoch())
//               .count();
// }


void get_vector_max() {
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
    int max = INT_MIN;
    vector<int> idx_max = vector<int>();
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == max) {
            idx_max.push_back(i);
        } else if (v[i] > max) {
            max = v[i];
            idx_max = vector<int>(1, max);
        }
    }
    cout << "The maximum element is " << max << endl;
    cout << "This element is observed at indexes: ";
    for (int i = 0; i < idx_max.size(); i++) {
        cout << idx_max[i] << " ";
    }
    cout << endl;
}

int main() {
    get_vector_max();
    return 0;
}
