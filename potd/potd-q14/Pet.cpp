// Pet.cpp
#include "Pet.h"
#include <iostream>
#include <string>

std::string Pet::getFood(){
  return food_;
}
void Pet::setFood(std::string food){
  food_ = food;
}
std::string Pet::getName(){
  return name_;
}
void Pet::setName(std::string name){
  name_ = name;
}
std::string Pet::getOwnerName(){
  return owner_name_ ;
}
void Pet::setOwnerName(std::string ownerName){
  owner_name_ = ownerName;
}
std::string Pet::print(){
  return "My name is " + name_;
}
Pet::Pet(){
  type_ = "cat";
  food_= "fish";
  setName("Fluffy");
  setOwnerName("Cinda");
}
Pet::Pet(std::string type, std::string food, std::string name, std::string owner_name) : Animal::Animal(type,food){
  //Animal(type,food);
  setName(name);
  setOwnerName(owner_name);
}
