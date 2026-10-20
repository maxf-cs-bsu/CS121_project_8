#include <iostream>
#include <string>
#include <sstream>
#include "date.h"

Date::Date(){
  dateString = "null";
  month = 0;
  day = 0;
  year = 0;
}

void Date::init(std::string dateString){	
  std::stringstream ss(dateString);
  std::string dateMonth;
  std::string dateDay;
  std::string dateYear;

  getline(ss, dateMonth, '/');
  getline(ss, dateDay, '/');
  getline(ss, dateYear, '/');

  ss.clear();
  ss.str("");

  ss << dateDay << " " << dateMonth << " " << dateYear;
  ss >> day >> month >> year;
} // end of init

void Date::printDate(){
  std::string monthNames[] ={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  std::cout << monthNames[month - 1] << " " << day << ", " << year << std::endl; 
} // end of printDate
