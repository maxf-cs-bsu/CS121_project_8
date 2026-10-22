#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS
#include "address.h"
#include "date.h"
#include <string>

class Student {
  protected:
    std::string lastName;
    std::string firstName;
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
    void getFirstName();
    void getLastName();
    void getCreditHours();
    void getLastFirst();

};

#endif
