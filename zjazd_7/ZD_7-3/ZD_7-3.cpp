//
// Created by flomaddic on 1/17/25.
//


#include <iostream>
#include <ostream>

using namespace std;

static const double PI = 3.141592653589793;

double get_radius() {
    cout << "Enter the radius of the circle: ";
    double radius;
    cin >> radius;
    return radius;
}

double calculate_area(int radius) {
    return PI * radius * radius;
}

int main() {
    double radius = get_radius();
    double table[10][10];
    double area = calculate_area(radius);
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            table[i][j] = area;
            area += 3;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
