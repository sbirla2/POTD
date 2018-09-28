#include <iostream>
#include <string>
using namespace std;

#include "Square.h"

Square::Square() {
    name = "mysquare";
    lengthptr = new double;
    *lengthptr = 2.0;
}
 Square& Square::operator=(const Square & other) {
  name = other.getName();
  lengthptr = new double;
  *lengthptr = other.getLength();
  return *this;
}
Square Square::operator+(const Square & other){
  Square result;
  result.setName(getName()+other.getName());
  result.setLength(getLength() +other.getLength());
  return result;
}

void Square::setName(string newName) {
  name = newName;
}

void Square::setLength(double newVal) {
  *lengthptr = newVal;
}

string Square::getName() const {
  return name;
}

double Square::getLength() const {
  return *lengthptr;
}

Square::Square(const Square & other) {
    name = other.getName();
    lengthptr = new double;
    *lengthptr = other.getLength();
}

Square::~Square() {
    delete lengthptr;
}
