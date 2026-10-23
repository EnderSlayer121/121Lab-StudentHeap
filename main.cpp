#include <iostream>
#include "date.h"
#include "address.h"
#include "student.h"
#include <sstream>
#include <fstream>
#include <vector>

int main(){
  std::string menu();
  void loadStudents(std::vector<Student*>&);
  void printStudents(std::vector<Student*>&);
  void allStudentNames(std::vector<Student*>&);
  void findStudent(std::vector<Student*>&);
  void delStudent(std::vector<Student*>&);


  return 0;
} // end main

void loadStudents(std::vector<Student*>&){
  std::ifstream inFile;
  std::stringstream ss;
  std::string currentLine;

  inFile 
}// end loadStudents
