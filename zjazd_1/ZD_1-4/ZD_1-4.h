//
// Created by flomaddic on 10/15/24.
//

#ifndef ZD_1_4_H
#define ZD_1_4_H
#include <array>

class ZD_1_4 {
public:
    static void solutionA();
    static void solutionB();
    static void solutionC();
private:
    static std::array<int, 3> getInput();
    static void printSolution(int max);
};

#endif //ZD_1_4_H
