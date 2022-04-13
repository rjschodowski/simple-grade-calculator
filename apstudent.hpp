#include "student.h"

class APstudent: private Student {
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
};
