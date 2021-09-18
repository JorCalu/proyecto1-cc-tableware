#include<iostream>
#include "tableware.hh"
#include "Stack.hh"

int main()
{
  List* type1{new List( "Glass", 300)};
  List* type2{new List("Plates", 500)};
  List* type3{new List("Beer Jars", 350)};
  List* type4{new List( "Forks and knives", 500)};

  Stack* stack{new Stack()};
  stack->Push(type1);
  stack->Push(type2);
  stack->Push(type3);
  stack->Push(type4);
  stack->Print();
  stack->Pop();
  stack->Print();

  std::cin.get();

  delete stack;
  return 0;
}

