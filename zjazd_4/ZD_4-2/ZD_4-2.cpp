//
// Created by flomaddic on 11/23/24.
//

#include <algorithm>
#include <iostream>
#include <map>
#include <list>
using namespace std;

void comonArrElement() {
    int size;
    cout << "Enter array size: ";
    cin >> size;
    map<int, int> numToOccurrences;

    for (int i = 0; i < size; i++) {
        int el;
        cout << endl << "Enter array element at index " << i << ": ";
        cin >> el;
        if (numToOccurrences.contains(el)) {
            numToOccurrences[el]++;
        } else {
            numToOccurrences[el] = 1;
        }
    }

    map<int, int>::iterator it = numToOccurrences.begin();
    int maxOccurrence = it->second;

    // find max occurrence
    while (it != numToOccurrences.end()) {
        int occurrences = it->second;
        if (occurrences > maxOccurrence) {
            maxOccurrence = occurrences;
        }
        ++it;
    }

    //find all nums with max occurrences
    list<int> result = {};
    map<int, int>::iterator it2 = numToOccurrences.begin();
    while (it2 != numToOccurrences.end()) {
        if (it2->second == maxOccurrence) {
            int num = it2->first;
            result.push_back(num);
        }
        ++it2;
    }

    cout << "Maximum amount of occurrences is " << maxOccurrence << endl;
    cout << "The following number(s) occur " << maxOccurrence << " times: ";

    std::for_each(result.begin(), result.end(), [](int i) {
        cout << i << " ";
    });
    cout << endl;
}
//
// int main() {
//     comonArrElement();
//     return 0;
// }
