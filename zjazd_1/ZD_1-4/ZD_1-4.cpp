//
// Created by flomaddic on 10/13/24.
//
#include "ZD_1-4.h"

#include <algorithm>
#include <array>
#include <climits>
#include <iostream>

using namespace std;

//Zadanie: Napisz program do znajdowania największej liczby wśród trzech liczb, podanych przez użytkownika.

void ZD_1_4::solutionA() {
    array<int, 3> nums = getInput();
    int a = nums.at(0);
    int b = nums.at(1);
    int c = nums.at(2);
    int max;
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= c) {
        max = b;
    } else {
        max = c;
    }
    printSolution(max);
}


void ZD_1_4::solutionB() {
    int max = INT_MIN;
    int current;
    for (int i = 0; i < 3; i++) {
        cout << "Type number " << i + 1 << ":";
        cin >> current;
        if (current > max) {
            max = current;
        }
    }
    printSolution(max);
}

void ZD_1_4::solutionC() {
    array<int, 3> nums = getInput();
    sort(nums.begin(), nums.end());
    printSolution(nums[2]);
}

array<int, 3> ZD_1_4::getInput() {
    array<int, 3> nums{};
    for (int i = 0; i < 3; i++) {
        cout << "Type number " << i + 1 << ":";
        cin >> nums[i];
    }
    return nums;
}

void ZD_1_4::printSolution(int max) {
    cout << "The highest number is " << max << "." << endl;
}
