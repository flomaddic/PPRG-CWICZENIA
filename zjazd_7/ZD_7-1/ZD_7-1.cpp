//
// Created by flomaddic on 1/17/25.
//


#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;

struct Person {
    string name;
    string surname;
};

vector<Person> get_people() {
    vector<Person> persons;
    for (int index = 1; index <= 3; index++) {
        string name;
        string surname;
        cout << "Person " << index << " - please enter name: ";
        cin >> name;
        cout << "Person " << index << " - please enter surname: ";
        cin >> surname;
        persons.push_back({name, surname});
    }

    return persons;
}


int main() {

    vector<Person> people = get_people();

    string person_arr[3][2];

    for (int i = 0; i < people.size(); ++i) {
        person_arr[i][0] = people.at(i).name;
        person_arr[i][1] = people.at(i).surname;
    }

    cout << "People from the array: " << endl;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << person_arr[i][j] << " ";
        }
        cout << endl;
    }

}
