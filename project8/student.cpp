#include <iostream>
#include <string>
#include <sstream>
#include "address.h"
#include "date.h"
#include "student.h"

Student::Student(){
  lastName = "null";
  firstName = "null";
  age = 0;
  creditHours = 0;
} // end of constructor

Student::~Student(){
} // end of destructor

void Student::init(std::string studentString){
  std::stringstream ss(studentString);
  Address a;
  Date d;

  std::string tLastName;
  std::string tFirstName;
  std::string tStreet;
  std::string tCity;
  std::string tState;
  std::string tZipcode;
  std::string tDob;
  std::string tExpectGrad;
  std::string tCreditHours;

  getline(ss, tLastName, ',');
  getline(ss, tFirstName, ',');
  getline(ss, tStreet, ',');
  getline(ss, tCity, ',');
  getline(ss, tState, ',');
  getline(ss, tZipcode, ',');
  getline(ss, tDob, ',');
  getline(ss, tExpectGrad, ',');
  getline(ss, tCreditHours, ',');

  firstName = tFirstName;
  lastName = tLastName;
  expectGrad = tExpectGrad;
  creditHours = std::stoi(tCreditHours);

//  ss.clear();
//  ss.str("");

  a.init(tStreet, tCity, tState, tZipcode);
  d.init(tDob);

} // end of init

void Student::printStudent(){
  Address a;
  Date d;
  	
  std::cout << firstName << " " << lastName << std::endl;
  a.printAddress();
  std::cout << "DOB: ";
  d.printDate();
  std::cout << "Grad: ";
  d.printDate(expectGrad);
  std::cout << "Credits: " << creditHours << std::endl;
  std::cout << "______________________________________" << std::endl;
  
} // end of printStudent

void Student::getLastName(){
  return lastName;
} // end of getLastName

void Student::getFirstName(){
  return firstName;
} // end of getFirstName

void Student::getCreditHours(){
  return creditHours;
} // end of getCreditHours

void Student::getLastName(){
  return lastname + ", " firstName;
}
