#include <iostream>
#include "date.h"
#include "address.h"
#include "student.h"
#include <sstream>
#include <fstream>
#include <vector>

std::string menu();
void loadStudents(std::vector<Student*>&);
void printStudents(std::vector<Student*>&);
void allStudentNames(std::vector<Student*>&);
void findStudent(std::vector<Student*>&);
void delStudents(std::vector<Student*>&);
int main(){
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
        std::cout << "You entered 3" << std::endl;
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
  std::cout << "0) Quit" << std::endl << "1) Print All Student Names" << std::endl;
  std::cout << "2) Print All Student Data" << std::endl << "3) Find a Student" << std::endl;
  std::cout << std::endl << "Please Choose 0-3: ";
  std::cin >> userChoice;
  std::cout << std::endl;
  return userChoice;
}// end menu

void loadStudents(std::vector<Student*>& students){
  std::ifstream inFile;
  std::stringstream ss;
  std::string currentLine;

  inFile.open("students.csv");

  while(getline(inFile, currentLine)){
    ss.clear();
    ss.str("");

    Student* student = new Student();

    ss << currentLine;
    
    student->init(currentLine);
    students.push_back(student);
  }//end while
  inFile.close();
}// end loadStudents

void delStudents(std::vector<Student*>& students){
  for (int i = 0; i < students.size(); i++){
    delete students[i];
  }// end for
}// end delStudents

void printStudents(std::vector<Student*>& students){
  for (int i = 0; i < students.size(); i++){
    students[i]->printStudent();
  }// end for
}// end printStudents

void allStudentNames(std::vector<Student*>& students){
  for (int i = 0; i < students.size(); i++){
    std::string output = students[i]->getLastFirst();
    std::cout << output << std::endl; 
  }// end for
}// end allStudentNames

void findStudent(std::vector<Student*>& students){
  std::string userInput;
  std::cout << "Please Enter Last Name of Student: ";
  std::cin >> userInput;
  std::cout << std::endl;

  for (int i = 0; i < students.size(); i++){
    std::string lastName = students[i]->getLastName();
    std::size_t found = lastName.find(userInput);
    if (found != std::string::npos){
      std::cout << students[i]->getLastFirst() << std::endl;
    }// end if
  }// end for
}// end findStudent
