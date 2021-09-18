#pragma once

#include<string>

class List
{
  private:
    std::string tableware;
    int amount;

  public:
    List( std::string tableware,  int amount);
    ~List();

    std::string GetTableware() const;
    int GetAmount() const;
};
