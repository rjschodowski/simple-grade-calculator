#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std; 

class Student {
  string firstName;
string lastName;
  float mathGrade, scienceGrade, peGrade, geoGrade, artGrade;
  float gpa;
  char l_grade;
void calculate() {
  gpa = (mathGrade + scienceGrade + peGrade + geoGrade + artGrade) / 5;
  if(gpa >= 90) {
    l_grade = 'A';
  } else if (gpa < 90 && gpa >= 80) {
    l_grade = 'B';
  } else if (gpa < 80 && gpa >= 70) {
    l_grade = 'C';
  } else if (gpa < 70 && gpa >= 60) {
    l_grade = 'D';
  } else {
    l_grade = 'E';
  }
}
public:
  void getData() {
    cout << "Enter student's first name: ";
    cin >> firstName;
    cout << "Enter student's last name: ";
    cin >> lastName;
    cout << "Enter grade percentage for math: ";
    cin >> mathGrade;
    cout << "Enter grade percentage for science: ";
    cin >> scienceGrade;
    cout << "Enter grade percentage for phys ed: ";
    cin >> peGrade;
    cout << "Enter grade percentage for geography: ";
    cin >> geoGrade;
    cout << "Enter grade percentage for art: ";
    cin >> artGrade;
    calculate();
  }

void showData() {
  cout << "\n\nName of student: \n" << firstName << " " << lastName << endl;
  cout << "Grade in math: " << mathGrade << endl;
  cout << "Grade in science: " << scienceGrade << endl;
  cout << "Grade in physical education: " << peGrade << endl;
  cout << "Grade in geography: " << geoGrade << endl;
  cout << "Grade in art: " << artGrade << endl;
  cout << "\nStudent's overall gpa: " << gpa << endl;
}
};
