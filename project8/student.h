#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS
#include "address.h"
#include "date.h"
#include <string>

class Student {
  protected:
    std::string firstName;
    std::string lastName;
    int age;
    Address address; 
    Date dob;
    Date expectGrad;
    int creditHours;
  public:
    Student();
    ~Student();
    void init(std::string studentString);
    void printStudent();
    std::string getFirstName();
    std::string getLastName();
    int getCreditHours();
    std::string getLastFirst();

};

#endif
