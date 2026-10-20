#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS
#include "address.h"
#include "date.h"
#include <string>

class Student {
  protected:
    std::string name;
    std::string lastName;
    int age;
    Address address; 
    Date dob;
    Date expectGrad;
    int creditHours;
  public:
    Student();
    ~Student();
    void init(studentString);
    void printStudent();
    void getFirstName();
    void getLastName();
    void getCreditHours();

};

#endif
