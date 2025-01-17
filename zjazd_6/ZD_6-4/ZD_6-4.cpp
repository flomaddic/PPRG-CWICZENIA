//
// Created by flomaddic on 1/17/25.
//


#include <iostream>
#include <ostream>
#include <string>

using namespace std;

void multi_print(int count, string s) {
    string result;
    for (int i = 0; i < count; i++) {
        result += s;
    }
    cout << "Result string: " << endl;
    cout << result;
}

int main() {
    string s;
    cout << "Enter the string to multiply: " << endl;
    cin >> s;
    cout << "How many times do you want to multiply the entered string? : " << endl;
    int count;
    cin >> count;
    multi_print(count, s);
}
