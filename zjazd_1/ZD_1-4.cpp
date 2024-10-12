//
// Created by flomaddic on 10/12/24.
//

#include <algorithm>
#include <iostream>
#include <limits.h>
using namespace std;

int main5(int argc, char *argv[]) {
    int nums[3];
    for (int i = 0; i < 3; i++) {
        cout << "Type number " << i + 1 << ":";
        cin >> nums[i];
    }
    sort(nums, nums + 3);
    cout << "The highest number is " << nums[2] << ".";

}

int main6(int argc, char *argv[]) {
    int max = INT_MIN;
    int current;
    for (int i = 0; i < 3; i++) {
        cout << "Type number " << i + 1 << ":";
        cin >> current;
        if (current > max) {
            max = current;
        }
    }
    cout << "The highest number is " << max << ".";
}

int main(int argc, char *argv[]) {

    int nums[3];
    for (int i = 0; i < 3; i++) {
        cout << "Type number " << i + 1 << ":";
        cin >> nums[i];
    }

    int a = nums[0];
    int b = nums[1];
    int c = nums[2];
    int max;
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }
    cout << "The highest number is " << max << "." << endl;
}


