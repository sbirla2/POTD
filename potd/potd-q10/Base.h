#pragma once
#include <string>

class Base {
  public:
    Base();
    std::string foo();
    virtual std::string bar();
    virtual ~Base();
};
