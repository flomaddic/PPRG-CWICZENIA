//
// Created by flomaddic on 11/11/24.
//

#include <cmath>
#include <iostream>
#include <format>
using namespace std;

void solve_quadratic_equation() {
    double a, b, c;
    cout << "We'are going to solve a quadratic equation in the form of a*x^2 + bx + c." << endl;
    cout << "Please enter a: ";
    cin >> a;
    cout << "Please enter b: ";
    cin >> b;
    cout << "Please enter c: ";
    cin >> c;

    string b_operator = (b >= 0) ? "+" : "";
    string c_operator = (c >= 0) ? "+" : "";

    cout << "The equation to solve is " << a << "x^2 " << b_operator << b << "x " << c_operator << " " << c << endl;

    double delta = b * b - 4 * a * c;
    if (delta < 0) {
        cout << "No solutions to the equation within the scope of real numbers" << endl;
        return;
    }

    if (delta == 0) {
        double x = -b / (2 * a);
        cout << "One solution to the equation: " << x << endl;
    }

    if (delta > 0) {
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);
        cout << "Two solutions to the equation:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
}


// int main() {
//     solve_quadratic_equation();
//     return 0;
// }
