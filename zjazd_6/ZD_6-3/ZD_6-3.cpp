//
// Created by flomaddic on 1/17/25.
//

#include <algorithm>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
  string name;
  string surname;
  int index_no;

  std::string toString() {
    return name + " " + surname + " " + to_string(index_no);
  }

  static bool compare(const Student& a, const Student& b) {
    return a.index_no < b.index_no;
  }
};

vector<Student> sort_students(vector<Student> students) {
  ranges::sort(students, Student::compare);
  return students;
}

void print_students(vector<Student> students) {
  for (Student student : students) {
    cout << student.toString() << endl;
  }
}

int main() {
  vector<Student> students = {
    {"Leo", "Kowal", 72165},
    {"Maciej", "Demp", 783},
    {"Alicja", "Kolecka", 260000},
    {"Katarzyna", "Szczaw", 15}
  };

  cout << "unsorted students:" << endl;

  for (Student student : students) {
    cout << student.toString() << endl;
  }

  auto sorted_students = sort_students(students);

  cout << "sorted students:" << endl;
  print_students(sorted_students);
}