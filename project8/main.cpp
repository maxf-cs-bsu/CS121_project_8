#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

#include "date.h"
#include "address.h"
#include "student.h"


void loadStudents(std::vector<Student*>& students);
void showStudentNames(std::vector<Student*>& students);
void printStudents(std::vector<Student*>& students);
void delStudents(std::vector<Student*>& students);
std::string menu();


int main(){
  std::vector<Student*> students;
  loadStudents(students);
  showStudentNames(students);
  printStudents(students);

  std::ifstream inFile;
  std::string currentLine;
  
  delStudents(students);
    
  return 0;
} // end of main


void loadStudents(std::vector<Student*>& students){
  std::ifstream inFile;
  std::string currentLine;

  inFile.open("students.csv");
  while(getline(inFile, currentLine)){
    Student* s = new Student;
    s->init(currentLine);
    students.push_back(s);
  } // end of whileloop
  inFile.close();
} // end of loadstudents


void showStudentNames(std::vector<Student*>& students){
   for (Student* student: students){
     std::cout << student->getLastFirst();
     std::cout << ", " << student->getCreditHours() << std::endl;
   } // end of for
} // end of showstudentnames


void printStudents(std::vector<Student*>& students){
  std::string studentString;
  for (Student* student: students){
    student->init(studentString);
    student->printStudent();
    std::cout << std::endl;
  } // end of for 
} // end of printstudents

void delStudents(std::vector<Student*>& students){
  for (Student* student: students){
    delete student;
  } // end of if
} // end of deletion

std::string menu(){
  std::cout << "0) Quit " << std::endl;
  std::cout << "1) Print all student names " << std::endl;
  std::cout << "2) Print all student data " << std::endl;
  std::cout << "3) Find a student " << std::endl;
  std::cout << std::endl;
  std::cout << "Type 0-3 for selection: ";
  return 0;
} // end of menu


// OLD TEST CODE IN CASE SOMETHING BREAKS!!!
/*
void testAddress();
void testDate();
void testStudent();

int main(){
  std::cout << "Hello!" << std::endl;
  testAddress();
  testDate();
  testStudent();
  return 0;
} // end main

void testAddress(){
  Address a;
  a.init("123 W Main St", "Muncie", "IN", "47303");
  a.printAddress();
} // end testAddress

void testDate(){
 Date d;
 d.init("01/27/1997");
 d.printDate();
} // end testDate

void testStudent(){
  std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
  Student* student = new Student();
  student->init(studentString);
  student->printStudent();
  std::cout << std::endl;
  std::cout << student->getLastFirst();
  delete student;
} // end testStudent
*/
