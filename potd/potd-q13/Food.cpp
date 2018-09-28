#include <iostream>
#include <string>
using namespace std;

#include "Food.h"

Food::Food() {
  name_ = "food";
  quantity_ = 0;
}
bool Food::operator>(const Food & that) const {
  if (getQuantity() > that.getQuantity()){
    return true;
  }
  return false;
}
void Food::setName(string newName) {
  name_ = newName;
}

void Food::setQuantity(int newQuantity) {
  quantity_ = newQuantity;
}

string Food::getName() const {
  return name_;
}

int Food::getQuantity() const {
  return quantity_;
}

void increaseQuantity(Food * food) {
    (*food).setQuantity((*food).getQuantity() + 1);
}