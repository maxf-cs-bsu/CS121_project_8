# Heap of students / Part 2
```mermaid
classDiagram

class Student{
  # name : string
  # lastName : string
  # age : int
  # Address* : Address
  # Date* : dob
  # Date* : expectGrad
  # creditHours : int
  + Student()
  + ~Student()
  + void init(studentString)
  + void printStudent()
  + string getFirstName()
  + string getLastName()
  + int getCreditHours()
}

Student --> Address
Student --> Date

class Address{
  # street : string
  # city : string
  # state : string
  # zipCode : string
  + Address()
  + void init(street, city, state, zipCode)
  + void printAddress()
}

class Date{
  # dateString
  # month : int
  # day : int
  # year : int
  + Date()
  + void init(dateString)
  + void printDate()

}
```
# Address
### Address:Address()
```
set street
set city
set state
set zipCode
```
### Address::init(street, city, state, zipCode)
```
// all should be strings
set street to street
set city to city
set state to state
set zipCode to zipCode
```
### Address::printAddress()
```
print state
print in the format of "city state, zipCode"
```
# Date
### Date::Date
```
set dateString
set month
set day
set year
```
### Date::init(dateString)
```
read dateString until "/" and put it into an int value
put into month
put into day
put into year
```
### Date::printDate()
```
using the int for the month, print out the month name (IE: 6 would be "June")
print the rest in the format of "June 6, 2006"
```
# Student
### Student::Student
```

```
