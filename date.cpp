#include <iostream>
#include <string>
#include <sstream>
#include "date.h"

Date::Date(){
  dateString = "";
  int month = 0;
  int day = 0;
  int year = 0;
}// end constructor

void Date::init(std::string dateString){
  Date::dateString = dateString;
  std::string tMonth, tDay, tYear;
  
  std::stringstream ss;
  
  ss.clear();
  ss.str("");

  ss << dateString;

  getline(ss, tMonth, '/');
  getline(ss, tDay, '/');
  getline(ss, tYear, '/');

  ss.clear();
  ss.str("");

  ss << tDay << " " << tMonth << " " << tYear;
  ss >> day >> month >> year;
}// end init

void Date::printDate(){
  std::string months[] = {"NULL", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  std::cout << months[month] << " ";
  std::cout << day << ", " << year << std::endl;
}//end printDate
