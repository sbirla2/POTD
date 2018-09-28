// Pet.h
#pragma once
#include <string>
#include "Animal.h"

class Pet : public Animal {
public:
  Pet();
  Pet(std::string type, std::string food, std::string name, std::string owner_name);
  std::string print();
  std::string type_;
  std::string food_;
  std::string getFood();
  void setFood(std::string food);
  std::string getName();
  void setName(std::string name);
  std::string getOwnerName();
  void setOwnerName(std::string ownerName);
private:
  std::string name_;
  std::string owner_name_;


};
