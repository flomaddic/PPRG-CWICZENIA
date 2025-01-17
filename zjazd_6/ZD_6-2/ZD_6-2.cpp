//
// Created by flomaddic on 1/17/25.
//
//
// Created by flomaddic on 12/21/24.
//

#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
  string name;
  int score_computer_science;
  int score_maths;
  int score_biology;
  int score_polish;
};

struct StudentQuery {
  int student_id;

};

Student getStudentData() {
  string name;
  int score_computer_science;
  int score_maths;
  int score_biology;
  int score_polish;
  cout << "Please enter the student name: ";
  cin >> name;
  cout << "Please enter the score for computer science: ";
  cin >> score_computer_science;
  cout << "Please enter the score for maths: ";
  cin >> score_maths;
  cout << "Please enter the score for biology: ";
  cin >> score_biology;
  cout << "Please enter the score for polish: ";
  cin >> score_polish;
  return { name, score_computer_science, score_maths, score_biology, score_polish };
}

bool check_next_query() {
  cout  << "Would you like to check students data? (Type Y to confirm or anything else to quit):";
  string response;
  cin >> response;
  return response == "Y";
}

int get_inquiry_count() {
  cout << "Please enter the number of students to query: ";
  int number;
  cin >> number;
  return number;
}

void query_student(vector<Student>& students) {
  cout << "Please enter student id [1-6]: ";
  int student_id;
  cin >> student_id;
  cout << "Please enter subject id [1-4]: ";
  int subject_id;
  cin >> subject_id;
  Student student = students[--student_id];
  string score_line = "";
  switch(subject_id) {
    case 1:
      score_line = "Computer science score: " + std::to_string(student.score_computer_science);
      break;
    case 2:
      score_line = "Maths score score: " + std::to_string(student.score_maths);
      break;
    case 3:
      score_line = "Biology score: " + std::to_string(student.score_biology);
      break;
    case 4:
      score_line = "Polish language score: " + std::to_string(student.score_polish);
      break;
  }
  cout << "Student " << student.name << endl;
  cout << score_line << endl;
}

int main() {
  vector<Student> students = {};
  for (int i = 1; i <= 1; i++) {
    students.push_back(getStudentData());
  }

  while (check_next_query()) {
    int inquiry_count = get_inquiry_count();
    for (int i = 0; i < inquiry_count; i++) {
      query_student(students);
    }
  }
}