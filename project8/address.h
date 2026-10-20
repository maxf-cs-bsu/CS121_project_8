#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

#include <iostream>
#include <string>

class Address {
  protected:
    std::string street;
    std::string city;
    std::string state;
    std::string zipCode;
  public:
    Address();
    void init(std::string street, std::string city, std::string state, std::string zipCode);
    void printAddress();
};

#endif
