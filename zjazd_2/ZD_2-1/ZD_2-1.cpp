//
// Created by flomaddic on 10/26/24.
//

#include <iostream>


int countSum(int n) {
    if (n < 1) {
        return 0;
    }
    int sum = 0;
    int el = 1;
    while (el <= n) {
        sum += el;
        el++;
    }
    return sum;
}

// int main() {
//     std::cout << countSum(3) << std::endl;
// }
