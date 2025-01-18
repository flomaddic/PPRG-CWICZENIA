//
// Created by flomaddic on 1/17/25.
//


#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;

long factorial(int n) {
    if (n > 1) {
        return ((long) n) * factorial(n - 1);
    } else {
        return 1;
    }
}

int main() {
    cout << "Provide factorial base: ";
    int n;
    cin >> n;
    if (n < 1) {
        cout << "Wrong input Please enter a positive integer next time";
    } else {
        cout << "Your factorial is: ";
        long fac = factorial(n);
        cout << fac << endl;

        bool divBy2 = fac % 2 == 0;
        bool divBy3 = fac % 3 == 0;
        bool divBy5 = fac % 5 == 0;
        bool divBy11 = fac % 11 == 0;

        string divbystr = "Number divisible by: ";
        divbystr += divBy2 ? "2 " : "";
        divbystr += divBy3 ? "3 " : "";
        divbystr += divBy5 ? "5 " : "";
        divbystr += divBy11 ? "11 " : "";

        cout << divbystr << endl;
    }
}
