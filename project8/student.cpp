#include <iostream>
#include <string>
#include <sstream>
#include "address.h"
#include "date.h"
#include "student.h"

Student::Student(){
  lastName = "";
  firstName = "";
  age = 0;
  address = "";
  dob = "";
  expectGrad = "";
  creditHours = 0;
} // end of constructor

Student::Student(studentString){
  std::string studentString;
}

Student::~Student(){
  delete address;
  delete dob;
  delete expectGrad;
} // end of destructor

Student::init(studentString){
  std::stringstream ss(studentString);

  std::string lastName;
  std::string firstName;
  std::string tAge;
  std::string tAddress;
  std::string tDob;
  std::string tExpectGrad;
  std::string tCreditHours;

  getline(ss, lastName, ',');
  getline(ss, firstName, ',');
  getline(ss, tAge, ',');
  getline(ss, tAddress, ',');
  getline(ss, tDob, ',');
  getline(ss, tExpectGrad, ',');
  getline(ss, tCreditHours, ',');

  ss.clear();
  ss.str("");

  ss << tAge << " " << tCreditHours;
  ss >> age >> creditHours;

  
} // end of init

Student::printStudent(){
  Address a;
  Date d;
  
  
} // end of printStudent

Student::getLastName(){
  return lastName;
} // end of getLastName

Student::getFirstName(){
  return firstName;
} // end of getFirstName

Student::getCreditHours(){
  return creditHours;
} // end of getCreditHours
