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
void findStudent(std::vector<Student*>& students);
void delStudents(std::vector<Student*>& students);
void menu();


int main(){
  std::vector<Student*> students;
  loadStudents(students);

  bool keepGoing = true;
  while(keepGoing){
    int userInput;
    menu();
    std::cin >> userInput;
    if (userInput == 0){
      std::cout << "Closing..." << std::endl;
      keepGoing = false;
    } else if (userInput == 1){
      showStudentNames(students);
    } else if (userInput == 2){
      printStudents(students);
    } else if (userInput == 3){
      findStudent(students);
    } else {
      std::cout << "Error: invald input. Ensure you type the correct inputs." << std::endl;
    } // end of if check
  } // end of keepGoing

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
  for (Student* student: students){
    student->printStudent();
    std::cout << std::endl;
  } // end of for 
} // end of printstudents

void findStudent(std::vector<Student*>& students){
  bool noMatch = false;
  std::string searchName;
  std::cout << "Enter last name: ";
  std::cin >> searchName;
  for (Student* student: students){
    if (student->getLastName() == searchName){
      student->printStudent();
      std::cout << std::endl;
    } // end of if
  } // end of for
} // end of findstudents

void delStudents(std::vector<Student*>& students){
  for (Student* student: students){
    delete student;
  } // end of if
} // end of deletion

void menu(){
  std::cout << "0) Quit " << std::endl;
  std::cout << "1) Print all student names " << std::endl;
  std::cout << "2) Print all student data " << std::endl;
  std::cout << "3) Find a student " << std::endl;
  std::cout << std::endl;
  std::cout << "Type 0-3 for selection: ";
} // end of menu

