#include <iostream>
#include <string>
#include <sstream>
#include "address.h"
#include "date.h"
#include "student.h"

Student::Student(){
  firstName = "null";
  lastName = "null";
  age = 0;
  creditHours = 0;
} // end of constructor

Student::~Student(){
} // end of destructor

void Student::init(std::string studentString){
  std::stringstream ss(studentString);

  std::string tFirstName;
  std::string tLastName;
  std::string tStreet;
  std::string tCity;
  std::string tState;
  std::string tZipcode;
  std::string tDob;
  std::string tExpectGrad;
  std::string tCreditHours;

  getline(ss, tFirstName, ',');
  getline(ss, tLastName, ',');
  getline(ss, tStreet, ',');
  getline(ss, tCity, ',');
  getline(ss, tState, ',');
  getline(ss, tZipcode, ',');
  getline(ss, tDob, ',');
  getline(ss, tExpectGrad, ',');
  getline(ss, tCreditHours, ',');

  firstName = tFirstName;
  lastName = tLastName;
  creditHours = std::stoi(tCreditHours);

  ss.clear();
  ss.str("");

  address.init(tStreet, tCity, tState, tZipcode);
  dob.init(tDob);
  expectGrad.init(tExpectGrad);
} // end of init

void Student::printStudent(){
  std::cout << firstName << " " << lastName << std::endl;
  address.printAddress();
  std::cout << "DOB: ";
  dob.printDate();
  std::cout << "Grad: ";
  expectGrad.printDate();
  std::cout << "Credits: " << creditHours << std::endl;
  std::cout << "______________________________________" << std::endl;
  
} // end of printStudent

std::string Student::getLastName(){
  return lastName;
} // end of getLastName

std::string Student::getFirstName(){
  return firstName;
} // end of getFirstName

int Student::getCreditHours(){
  return creditHours;
} // end of getCreditHours

std::string Student::getLastFirst(){
  return lastName + ", " + firstName;
} // end of getLastFirst
