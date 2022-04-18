#include<iostream>
#include<stdio.h>
#include<string.h>
#include<iomanip>
using namespace std; 

class APstudent {
  int idNum;
  string firstName;
  string lastName;
  float aptrigonometryGrade, apEnglishGrade, apSpanishGrade, apChemistryGrade, roboticsGrade, apGymGrade;
  float gpa;
  char l_grade;

void calculate() {
  gpa = (aptrigonometryGrade + apEnglishGrade + apSpanishGrade + apChemistryGrade + roboticsGrade + apGymGrade) / 6;
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
    cout << "Enter student's ID number: ";
    cin >> idNum;
    cout << "Enter student's first name: ";
    cin >> firstName;
    cout << "Enter student's last name: ";
    cin >> lastName;
    cout << "Enter grade percentage for AP trigonometry: ";
    cin >> aptrigonometryGrade;
    cout << "Enter grade percentage for AP English: ";
    cin >> apEnglishGrade;
     cout << "Enter grade percentage for AP Spanish: ";
    cin >> apSpanishGrade;
    cout << "Enter grade percentage for AP chemistry: ";
    cin >> apChemistryGrade;
    cout << "Enter grade percentage for robotics: ";
    cin >> roboticsGrade;
    cout << "Enter grade percentage for AP gym: ";
    cin >> apGymGrade;
    calculate();
  }

void showData() {
  cout << "\n\nName of student:\t\t\t" << firstName << " " << lastName << endl;
  cout << "Student ID number:\t\t\t" << idNum << endl;
  cout << "Grade in AP trigonometry:\t" << aptrigonometryGrade << endl;
  cout << "Grade in AP English:\t\t" << apEnglishGrade << endl;
  cout << "Grade in AP Spanish:\t\t" << apSpanishGrade << endl;
  cout << "Grade in AP chemistry:\t\t" << apChemistryGrade << endl;
  cout << "Grade in robotics:\t\t\t" << roboticsGrade << endl;
  cout << "Grade in AP gym:\t\t\t" << apGymGrade << endl;
  cout << "\nStudent's gpa:\t\t\t\t" << setprecision(4) << gpa << endl;
}
};
