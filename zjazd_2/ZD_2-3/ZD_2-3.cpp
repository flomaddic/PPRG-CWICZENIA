//
// Created by flomaddic on 10/26/24.
//


#include <iostream>
using namespace std;

int getNum() {
    int num;
    cout << "Podaj numer miesiaca: " << endl;
    cin >> num;
    return num;
}

void printMonth(int num) {
    switch (num) {
        case 1:
            cout << "Styczen" << endl;
            break;
        case 2:
            cout << "Luty" << endl;
            break;
        case 3:
            cout << "Marzec" << endl;
            break;
        case 4:
            cout << "Kwiecien" << endl;
            break;
        case 5:
            cout << "Maj" << endl;
            break;
        case 6:
            cout << "Czerwiec" << endl;
            break;
        case 7:
            cout << "Lipiec" << endl;
            break;
        case 8:
            cout << "Sierpien" << endl;
            break;
        case 9:
            cout << "Wrzesien" << endl;
            break;
        case 10:
            cout << "Pazdziernik" << endl;
            break;
        case 11:
            cout << "Listopad" << endl;
            break;
        case 12:
            cout << "Grudzien" << endl;
            break;
        default:
            cout << "Taki numer miesiaca nie istnieje: " << num << endl;
    }
}

void printDays(int monthNum) {
    switch (monthNum) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
            cout << "Ten miesiac ma " << 30 << " dni";
            break;
        }
        case 4: case 6: case 9: case 11: {
            cout << "Ten miesiac ma " << 31 << " dni";
            break;
        }
        case 2: {
            cout << "Ten miesiac ma " << 28 << " dni";
            break;
        }
        default: {
            cout << "Nie mozna podac ilosci dni";
            break;
        }
    }
    cout << endl;
}

void printWeather(int month) {
    if (month < 0 || month > 12) {
        cout << "Nie mozna podac pogody dla nieistniejacego miesiaca";
    } else {
        cout << "W tym miesiacu jest " << ((month >= 4 && month <= 9) ? "slonecznie" : "pochmurno") << endl;
    }
}

// int main() {
//     int num = getNum();
//     printMonth(num);
//     printDays(num);
//     printWeather(num);
//     return 0;
// }
