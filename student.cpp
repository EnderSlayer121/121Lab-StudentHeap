#include <iostream>
#include <sstream>
#include <string>
#include "student.h"
#include "address.h"
#include "date.h"

Student::Student(){
  studentString = "";
  firstName = "";
  lastName = "";
  dob = new Date();
  expectedGrad = new Date();
  address = new Address();
  creditHours = 0;
}// end constructor

Student::Student(std::string studentString){
  Student::init(studentString);
}// end alt constructor

Student::~Student(){
  delete dob;
  delete expectedGrad;
  delete address;
}// end destructor

void Student::init(std::string studentString){
  Student::studentString = studentString;
  std::string street, city, state, zip, tDob, tGradDate, tCreditHours;
  Student::creditHours = creditHours;
  
  std::stringstream ss;

  ss.clear();
  ss.str("");

  ss << studentString;

  getline(ss, firstName, ',');
  getline(ss, lastName, ',');
  getline(ss, street, ',');
  getline(ss, city, ',');
  getline(ss, state, ',');
  getline(ss, zip, ',');
  getline(ss, tDob, ',');
  getline(ss, tGradDate, ',');
  getline(ss, tCreditHours);

  address->init(street, city, state, zip);
  dob->init(tDob);
  expectedGrad->init(tGradDate);

  ss.clear();
  ss.str(tCreditHours);
  ss >> creditHours;
}// end init

void Student::printStudent(){
  std::cout <<  Student::getFirstName() << " " << Student::getLastName() <<  std::endl;
  address->printAddress();
  dob->printDate();
  expectedGrad->printDate();
  std::cout << Student::getCreditHours() << std::endl;
}// end printStudent

std::string Student::getLastFirst(){
  return lastName + " " + firstName;
}// end getLastFirst

std::string Student::getLastName(){
  return lastName;
}// end getLastName

std::string Student::getFirstName(){
  return firstName;
}// end getFirstName

int Student::getCreditHours(){
  return creditHours;
}// end getCreditHours
