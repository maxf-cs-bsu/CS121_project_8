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
/*
Student::Student(studentString){
  std::string studentString(studentString);
}
*/
Student::~Student(){
  delete address;
  delete dob;
  delete expectGrad;
} // end of destructor

Student::init(studentString){
  std::stringstream ss(studentString);

  std::string lastName;
  std::string firstName;
  std::string age;
  std::string new tAddress;
  std::string new tDob;
  std::string new tExpectGrad;
  std::string creditHours;

  getline(ss, lastName, ',');
  getline(ss, firstName, ',');
  getline(ss, age, ',');
  getline(ss, tAddress, ',');
  getline(ss, tDob, ',');
  getline(ss, tExpectGrad, ',');
  getline(ss, creditHours, ',');

  ss.clear();
  ss.str("");



} // end of init

Student::printStudent(){

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
