//
// Created by flomaddic on 12/21/24.
//

#include <iostream>
#include <ostream>
#include <string>

using namespace std;

bool divisible_by_5(int num) {
    return num % 5 == 0;
}

bool divisible_by_3(int num) {
    return num % 3 == 0;
}

int get_max() {
    cout << "Please enter a number: ";
    int max;
    cin >> max;
    return max;
}

int main_disbled() {
    int max = get_max();
    int count = 0;
    for (int i = 1; i <= max; i++) {
        if (divisible_by_5(i) && !divisible_by_3(i)) {
            count++;
        }
    }
    cout << "There is/are " << to_string(count) << " natural numbers between 1 and " << max << " which are divisible by 5 and not divisible by 3" << endl;
}