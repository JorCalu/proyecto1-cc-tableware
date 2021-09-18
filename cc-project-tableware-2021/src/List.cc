#include "Stack.hh"

List::List(std::string tableware, int amount)
{
  this->tableware = tableware;
  this->amount = amount;
}

List::~List()
{
}


std::string List::GetTableware() const
{
  return tableware;
}

int List::GetAmount() const
{
  return amount;
}
