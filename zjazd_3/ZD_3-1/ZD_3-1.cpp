//
// Created by flomaddic on 11/9/24.
//


#include <iostream>
using namespace std;


void calculateFromInput() {
    float a, b;

    cout << "Please enter number A: " << endl;
    cin >> a;
    cout << "Please enter number B: " << endl;
    cin >> b;

    float sum = a + b;
    float diff = a - b;
    float product = a * b;
    float quotient = a / b;

    printf("A + B = %.2f\n", sum);
    printf("A - B = %.2f\n", diff);
    printf("A * B = %.2f\n", product);
    printf("A / B = %.2f\n", quotient);
}

// int main() {
//     calculateFromInput();
//     return 0;
// }




