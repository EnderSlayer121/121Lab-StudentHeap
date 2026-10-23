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

  std::vector<Student*> students;
  loadStudents(students);

  bool keepGoing = true;
  while(keepGoing){
    std::string response = menu();
      if (response == "0"){
        delStudents(students);
        keepGoing = false;
      }
      else if (response == "1"){
        allStudentNames(students);
      }
      else if (response == "2"){
        printStudents(students);
      }
      else if (response == "3"){
        findStudent(students);
      }
      else {
        std::cout << "Error: Choose a number between 0-3" << std::endl;
      }// end if
  }// end while
  return 0;
} // end main

std::string menu(){
  std::string userChoice;

}// end menu

void loadStudents(std::vector<Student*>&){
  std::ifstream inFile;
  std::stringstream ss;
  std::string currentLine;

  inFile.open("students.csv");

  while(getLine(inFile, currentLine)){
    ss.clear();
    ss.str("");

    
  }//end while
}// end loadStudents
