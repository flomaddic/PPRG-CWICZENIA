//
// Created by flomaddic on 1/17/25.
//


#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

enum calculation_operator {
    ADD,
    SUB,
    MUL,
    TRANS
};


struct Matrix {
    vector<vector<int> > data;
};

struct calc_data {
    calculation_operator operation;
    vector<vector<int> > a;
    vector<vector<int> > b;
};

bool validate_operation(int op_idx_i) {
    if (op_idx_i < 1 || op_idx_i > 4) {
        cout << "Podano niewłaściwą liczbę. Proszę spróbować jeszcze raz";
        return false;
    }
    return true;
}

calculation_operator get_operation() {
    bool correct_input = false;
    int choice;
    while (!correct_input) {
        cout << "Wybierz operacje: " << endl;
        cout << "1 : dodawanie" << endl;
        cout << "2 : odejmowanie" << endl;
        cout << "3 : mnożenie" << endl;
        cout << "4 : transpozycja" << endl;
        cout << "Podaj operacje: ";
        cin >> choice;
        correct_input = validate_operation(choice);
    }
    switch (choice) {
        case 1:
            return ADD;
        case 2:
            return SUB;
        case 3:
            return MUL;
        case 4:
            return TRANS;
        default:
            throw std::invalid_argument("Invalid operation supplied");
    }
}

vector<vector<int> > get_data(string name) {
    //initialize vector of vectors of ints with appropriate size
    vector<vector<int> > matrix(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Podaj element macierzy " << name << " dla i=" << i + 1 << ", j= " << j + 1 << " : ";
            int element;
            cin >> element;
            matrix[i][j] = element;
        }
    }
    return matrix;
}

calc_data get_user_input() {
    auto matrix_a = get_data("A");
    auto matrix_b = get_data("B");
    auto operation = get_operation();
    calc_data c_data;
    c_data.operation = operation;
    c_data.a = matrix_a;
    c_data.b = matrix_b;
    return c_data;
}

void print_matrix(vector<vector<int> > matrix) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void print_confirmation(calc_data user_input) {
    cout << "Wprowadzona macierz A :" << endl;
    print_matrix(user_input.a);
    cout << "Wprowadzona macierz B :" << endl;
    print_matrix(user_input.b);
    string operation_str;
    switch (user_input.operation) {
        case ADD:
            operation_str = "dodawanie";
            break;
        case SUB:
            operation_str = "odejmowanie";
            break;
        case MUL:
            operation_str = "mnozenie";
            break;
        case TRANS:
            operation_str = "transpozycja";
            break;
    }
    cout << "Wybrana operacja: " << operation_str << endl;
}

vector<vector<int> > add(vector<vector<int> > a, vector<vector<int> > b) {
    vector<vector<int> > result(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    return result;
}

vector<vector<int> > sub(vector<vector<int> > a, vector<vector<int> > b) {
    vector<vector<int> > result(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
    return result;
}

vector<vector<int> > mul(vector<vector<int> > a, vector<vector<int> > b) {
    vector<vector<int> > result(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int sum = 0;
            for (int k = 0; k < 3; k++) {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
        }
    }
    return result;
}

vector<vector<int> > trans(vector<vector<int> > a) {
    vector<vector<int>> result(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = a[j][i];
        }
    }
    return result;
}

void run_calculation(calc_data user_input) {
    switch (user_input.operation) {
        case ADD:
            cout << "Wynik dodawania: " << endl;
        print_matrix(add(user_input.a, user_input.b));
        break;
        case SUB:
            cout << "Wynik odejmowania: " << endl;
        print_matrix(sub(user_input.a, user_input.b));
        break;
        case MUL:
            cout << "Wynik mnożenia : " << endl;
        print_matrix(mul(user_input.a, user_input.b));
        break;
        case TRANS:
            cout << "Wynik transpozycji A: " << endl;
        print_matrix(trans(user_input.a));
        cout << "Wynik transpozycji B: " << endl;
        print_matrix(trans(user_input.b));
        break;
    }
}


int main() {
    auto user_input = get_user_input();
    print_confirmation(user_input);
    run_calculation(user_input);
}
