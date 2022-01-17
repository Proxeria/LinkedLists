#include "Student.h"

Student::Student(int newStudentID) {
  studentID = newStudentID;
}

Student::~Student() {
  
}

int Student::getStudentID() {
  return studentID;
}
