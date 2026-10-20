#include <iostream>
#include <string>
#include "address.h"

Address::Address(){
  street = "null";
  city = "null";
  state = "null";
  zipCode = "null";
} // end of constructor

void Address::init(std::string street, std::string city, std::string state, std::string zipCode){
  Address::street = street;
  Address::city = city;
  Address::state = state;
  Address::zipCode = zipCode;
} // end of init

void Address::printAddress(){
  std::cout << street << std::endl;
  std::cout << city << " " << state << ", " << zipCode << std::endl;
} // end of printAddress


